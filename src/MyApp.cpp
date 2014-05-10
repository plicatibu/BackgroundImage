/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#include <wx/wx.h>
#include <wx/app.h>
#include <wx/frame.h>
#include <wx/image.h>

#include "global_settings.h"

#include "MyApp.h"
#include "MainScreen.h"



IMPLEMENT_APP(MyApp)

MyApp::MyApp()
{
	frame = NULL;
}

MyApp::~MyApp()
{
}

bool MyApp::OnInit()
{
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

    frame = new wxFrame(NULL, wxID_ANY, g_appName, wxPoint(0,0), g_appSize, wxCAPTION | wxCLOSE_BOX | wxMINIMIZE_BOX | wxSYSTEM_MENU);

    MainScreen *panel = new MainScreen(frame, wxID_ANY, wxPoint(0,0), g_appSize);

    sizer->Add(panel, 1, wxALIGN_CENTER, 100);

    frame->SetSizer(sizer);
    frame->Centre();
    frame->Show();


    return true;
}

