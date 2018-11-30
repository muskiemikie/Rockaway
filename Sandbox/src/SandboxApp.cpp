#include "Engine.h"

class Sandbox : public Rockaway::Application
{
public:
	Sandbox()
	{

	}
	
	~Sandbox()
	{

	}
};

Rockaway::Application* Rockaway::CreateApplication()
{
	return new Sandbox();
}