#pragma once
#include "wx/wx.h"

class Window;

class App : public wxApp
{

public:
	Window* window = nullptr;
	virtual bool OnInit();

};

