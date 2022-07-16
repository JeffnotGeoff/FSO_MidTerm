#pragma once
//#include <string>    //How do Strings break the program.... What?
#include "wx/wx.h"

class Window : public wxFrame
{
public:
	Window(); //constructor
	~Window(); //deconstructor

	int columns = 1;
	int rows = 5;

	int questionNumber = rand() % 4;

	int answer = 0;

	wxButton** buttons; 

	const char* questions[4] = {"What is 2+2?", "Which color does not apply to RGB?", "How many fingers on a Human Hand?", "How many legs on a spider?"};
	const char* answers0[4] = { "1", "2", "3", "4" };
	const char* answers1[4] = { "Red", "Green", "Blue", "Yellow" };
	const char* answers2[4] = { "4", "5", "6", "7" };
	const char* answers3[4] = { "4", "6", "8", "10" };
	
	void OnButtonClicked(wxCommandEvent& evt);
};

