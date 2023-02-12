#include "main.h"
#include "gui.h"

IMPLEMENT_APP(HelloApp)

HelloApp::HelloApp() {
}

HelloApp::~HelloApp() {
}

bool HelloApp::OnInit() {
	t_main* frame = new t_main((wxWindow*)NULL);
	frame->Show();
	SetTopWindow(frame);
	return true;
}