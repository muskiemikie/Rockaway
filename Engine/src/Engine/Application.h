#pragma once

#include "Core.h"

namespace Rockaway {

	class ROCKAWAY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

