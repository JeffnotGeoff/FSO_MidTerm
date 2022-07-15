#include "Window.h"


Window::Window() : wxFrame(nullptr, wxID_ANY, "Quiz Time!", wxPoint(200, 200), wxSize(800, 300)) {

	buttons = new wxButton * [rows];

	wxGridSizer* grid = new wxGridSizer(rows, columns, 0, 0);

	for (int y = 0; y < rows; y++) {
		buttons[y] = new wxButton(this, 10000 + y);


		grid->Add(buttons[y], 1, wxEXPAND | wxALL);

		if (y == 0)
			buttons[y]->Enable(false);
	}

	this->SetSizer(grid);
	grid->Layout();
}