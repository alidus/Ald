#pragma once

#ifdef ALD_PLATFORM_WINDOWS

extern Ald::Application* Ald::CreateApplication();

int main(int argc, char** argv)
{
	auto App = Ald::CreateApplication();
	App->Run();
	delete App;
}

#endif
 