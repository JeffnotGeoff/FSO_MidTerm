#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
public:
	Window(); //constructor
	~Window(); //deconstructor

	int columns = 1;
	int rows = 5;

	wxButton** buttons; 
};

