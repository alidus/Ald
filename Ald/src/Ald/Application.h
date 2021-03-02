#pragma once
#include "Core.h"

namespace Ald
{
	class ALD_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	// To be defined in CLIENT
	Application* CreateApplication();
}


