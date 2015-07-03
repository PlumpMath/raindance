#pragma once

#include <raindance/Core/Headers.hh>
#include <raindance/Core/Context.hh>
#include <raindance/Core/Interface/WindowManager.hh>

class Raindance
{
public:
	Raindance(int argc, char** argv)
	{
		GLFW::create(argc, argv);

		m_Context = new Context();
	}

	virtual ~Raindance()
	{
		GLFW::destroy();
	}

	virtual void add(rd::Window* window)
	{
		GLFW::setCallbacks(window);
		auto id = m_WindowManager.add(window);
		m_WindowManager.bind(id);
	}

    virtual void run()
    {
    	m_WindowManager.active()->initialize(m_Context);

    	while (m_WindowManager.active()->state() == rd::Window::ALIVE)
    	{
    		Geometry::beginFrame();

	        m_WindowManager.active()->before(m_Context);
	        m_WindowManager.active()->draw(m_Context);
	        m_WindowManager.active()->after(m_Context);
	   		 	
   		 	Geometry::endFrame();

	    	idle();

    		checkGLErrors();
    	}
    }

    virtual void stop()
    {
    	windows().active()->close();
    }

	virtual void idle()
	{
		windows().active()->idle(m_Context);
	}

	inline WindowManager& windows() { return m_WindowManager; }

protected:
	Context* m_Context;
	WindowManager m_WindowManager;
};

