#pragma once

//#include "Application.h"

#ifdef ROCKAWAY_PLATFORM_WINDOWS

extern Rockaway::Application* Rockaway::CreateApplication();

int main(int argc, char** argv[])
{
	auto app = Rockaway::CreateApplication();
	app->Run();
	delete app;
}

#endif