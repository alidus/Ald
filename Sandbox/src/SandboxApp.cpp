#include "SandboxApp.h"
#include <Ald.h>

class Sandbox : public Ald::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};


Ald::Application* Ald::CreateApplication()
{
	return new Sandbox();
}