#pragma once
#include "wx/wx.h"

class Window;

class App : public wxApp
{

public:
	Window* quiz = nullptr;
	virtual bool OnInit();

};

