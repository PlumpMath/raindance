#pragma once

#include "Core/Headers.hh"

enum VariableType
{
	STRING,
	INT,
	FLOAT,
	BOOLEAN,
	VEC2,
	VEC3,
	VEC4
};

class IVariable
{
public:
	virtual ~IVariable() {}

	inline VariableType type() const { return m_Type; }
	inline void type(VariableType type) { m_Type = type; }

	inline const std::string& name() const { return m_Name; }
	inline void name(std::string& name) { m_Name = name; }

	virtual void set(const std::string& str) = 0;
	virtual IVariable* duplicate() = 0;
protected:
	VariableType m_Type;
	std::string m_Name;
};

class StringVariable : public IVariable
{
public:
	inline virtual void set(const std::string& str) { m_Type = STRING; m_Value = str; }
	inline const std::string& value() { return m_Value; }
	virtual IVariable* duplicate() { StringVariable* variable = new StringVariable(); variable->set(m_Value); return variable; }
private:
	std::string m_Value;
};

class IntVariable : public IVariable
{
public:
	inline virtual void set(const std::string& str) { m_Type = INT; m_Value = atoi(str.c_str()); }
	inline virtual void set(int value) { m_Type = INT; m_Value = value; }
	inline int value() { return m_Value; }
	virtual IVariable* duplicate() { IntVariable* variable = new IntVariable(); variable->set(m_Value); return variable; }
private:
	int m_Value;
};

class BooleanVariable : public IVariable
{
public:
	inline virtual void set(const std::string& str)
	{
		m_Type = BOOLEAN;
		if (str == "1" || str == "true" || str == "True")
			m_Value = true;
		else
			m_Value = false;
	}
	inline virtual void set(bool value) { m_Type = BOOLEAN; m_Value = value; }
	inline bool value() { return m_Value; }
	virtual BooleanVariable* duplicate() { BooleanVariable* variable = new BooleanVariable(); variable->set(m_Value); return variable; }
private:
	bool m_Value;
};

class FloatVariable : public IVariable
{
public:
	inline virtual void set(const std::string& str) { m_Type = FLOAT; m_Value = atof(str.c_str()); }
	inline virtual void set(float value) { m_Type = FLOAT; m_Value = value; }
	inline float value() { return m_Value; }
	virtual IVariable* duplicate() { FloatVariable* variable = new FloatVariable(); variable->set(m_Value); return variable; }
private:
	float m_Value;
};

class Vec2Variable : public IVariable
{
public:
	inline virtual void set(const std::string& str)
	{
		m_Type = VEC2;
		std::stringstream ss(str);
		ss >> m_Value.x >> m_Value.y;
	}
	inline virtual void set(glm::vec2 value) { m_Type = VEC2; m_Value = value; }
	inline const glm::vec2& value() { return m_Value; }
	virtual IVariable* duplicate() { Vec2Variable* variable = new Vec2Variable(); variable->set(m_Value); return variable; }
private:
	glm::vec2 m_Value;
};

class Vec3Variable : public IVariable
{
public:
    inline virtual void set(const std::string& str)
    {
        m_Type = VEC3;
        std::stringstream ss(str);
        ss >> m_Value.x >> m_Value.y >> m_Value.z;
    }
    inline virtual void set(glm::vec3 value) { m_Type = VEC3; m_Value = value; }
    inline const glm::vec3& value() { return m_Value; }
    virtual IVariable* duplicate() { Vec3Variable* variable = new Vec3Variable(); variable->set(m_Value); return variable; }
private:
    glm::vec3 m_Value;
};

class Vec4Variable : public IVariable
{
public:
    inline virtual void set(const std::string& str)
    {
        m_Type = VEC4;
        std::stringstream ss(str);
        ss >> m_Value.x >> m_Value.y >> m_Value.z >> m_Value.w;
    }
    inline virtual void set(glm::vec4 value) { m_Type = VEC4; m_Value = value; }
    inline const glm::vec4& value() { return m_Value; }
    virtual IVariable* duplicate() { Vec4Variable* variable = new Vec4Variable(); variable->set(m_Value); return variable; }
private:
    glm::vec4 m_Value;
};


class Variables
{
public:
    Variables()
    {
    }

    virtual ~Variables()
    {
        /* TODO : Deleting the variables here leads to crashes ! Why ?
        while(!m_Variables.empty())
        {
            delete m_Variables.back();
            m_Variables.pop_back();
        }
        */
    }

	const IVariable* set(std::string& name, VariableType type, std::string& value)
	{
		// TODO : All of this can be optimized with a hash table

		std::vector<IVariable*>::iterator it;
		for (it = m_Variables.begin(); it != m_Variables.end(); ++it)
		{
			if (name == (*it)->name())
			{
				if (type != (*it)->type())
				{
					LOG("[VARIABLES] Variable type mismatches !\n");
					return NULL;
				}
				else
				{
					(*it)->set(value);
					return *it;
				}
			}
		}

		IVariable* variable = NULL;
		switch(type)
		{
		case STRING:
			variable = new StringVariable();
			break;
		case INT:
			variable = new IntVariable();
			break;
		case FLOAT:
			variable = new FloatVariable();
			break;
		case BOOLEAN:
			variable = new BooleanVariable();
			break;
        case VEC3:
            variable = new Vec3Variable();
            break;
        case VEC4:
            variable = new Vec4Variable();
            break;
		default:
			LOG("[VARIABLES] Unknown variable type !\n");
			return NULL;
		}
		variable->name(name);
		variable->set(value);
		m_Variables.push_back(variable);

		return variable;
	}

	IVariable* get(const std::string& name)
	{
		std::vector<IVariable*>::iterator it;
		for (it = m_Variables.begin(); it != m_Variables.end(); ++it)
		{
			if (name == (*it)->name())
				return *it;
		}
		return NULL;
	}

	IVariable* get(const char* name)
	{
		return this->get(std::string(name));
	}

private:
	std::vector<IVariable*> m_Variables;
};

