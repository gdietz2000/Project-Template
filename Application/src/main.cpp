#include "Application/Application.h"

int main(int argc, char** argv)
{
	App::Application* app = new App::Application();
	app->PrintMessage();
	delete app;

	return 0;
}