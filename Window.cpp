#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Quiz Time!", wxPoint(200, 200), wxSize(300, 600)) {

	
	if (questionNumber == 0 || questionNumber == 2) {
		answer = 2;
	}
	else if (questionNumber == 1) {
		answer = 4;
	}
	else {
		answer = 3;
	}
	

	buttons = new wxButton * [rows];

	wxGridSizer* grid = new wxGridSizer(rows, columns, 0, 0);

	for (int y = 0; y < rows; y++) {
		buttons[y] = new wxButton(this, 10000 + y);

		buttons[y]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Window::OnButtonClicked, this);

		grid->Add(buttons[y], 1, wxEXPAND | wxALL);

		if (y == 0) {
			buttons[y]->Enable(false);
			buttons[y]->SetLabel(questions[questionNumber]);
		}
		else {
			switch (questionNumber) {
			case 0:
				buttons[y]->SetLabel(answers0[y - 1]);
				break;
			case 1:
				buttons[y]->SetLabel(answers1[y - 1]);
				break;
			case 2:
				buttons[y]->SetLabel(answers2[y - 1]);
				break;
			case 3:
				buttons[y]->SetLabel(answers3[y - 1]);
				break;
			default:
				buttons[y]->SetLabel("This should not appear. If it does, should I be scared?");
				break;
			}
		}
	}

	/*
	buttons[0]->SetLabel("Question: ");
	buttons[1]->SetLabel("A: ");
	buttons[2]->SetLabel("B: "); //Testing button Labels
	buttons[3]->SetLabel("C: ");
	buttons[4]->SetLabel("D: ");
	*/

	this->SetSizer(grid);
	grid->Layout();
}

Window::~Window() {
	delete[] buttons;
}

void Window::OnButtonClicked(wxCommandEvent& evt) {
	int y = (evt.GetId() - 10000);

	if (y == answer) {
		wxMessageBox("Correct!!");
	}
	else {
		wxMessageBox("Incorrect");
	}
}