#include "App.h"
#include "Window.h"

wxIMPLEMENT_APP(App);

bool App : OnInit() {
	quiz = new Window();
	quiz->Show();
	return true;
}
