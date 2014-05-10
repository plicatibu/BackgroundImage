/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#include <wx/wx.h>
#include <wx/sizer.h>

#include "MainScreen.h"
#include "TransparentStaticText.h"

MainScreen::MainScreen( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) :
BaseScreen( parent, id, pos, size, style )
{
	// First of all I set the properties of the Panel
	this->SetForegroundColour( g_PanelForegroundColor );
	this->SetBackgroundColour( g_PanelBackroundColor );
	this->SetMinSize( wxSize( g_appSize ) );
	this->SetMaxSize( wxSize( g_appSize ) );

	//Now I start adding the components

	// This sizer is the main container (afer Panel, of course).
	// All other components go inside it.
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );


	// Title - Start
	m_txtTitle = new TransparentStaticText ( this, wxID_ANY, g_mainMenuTitle, wxDefaultPosition, wxDefaultSize, 0 );
	m_txtTitle->Wrap( -1 );
	m_txtTitle->SetFont( g_fontTitle );
	m_txtTitle->SetForegroundColour( g_TitleColor );

	bSizer1->Add( m_txtTitle, 0, wxALIGN_CENTER|wxALL, 5 );


	// File button - Start
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	m_btnFile = new wxButton( this, wxID_ANY, g_txtFile, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_btnFile, 1, wxALL, 5 );

	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );



	// Import button - Start
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	m_btnImport = new wxButton( this, wxID_ANY, g_txtImport, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_btnImport, 1, wxALL, 5 );

	bSizer1->Add( bSizer3, 0, wxEXPAND, 5 );



	// Export button - Start
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	m_btnExport = new wxButton( this, wxID_ANY, g_txtExport, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_btnExport, 1, wxALL, 5 );

	bSizer1->Add( bSizer4, 0, wxEXPAND, 5 );



	// About button - Start
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	m_btnAbout = new wxButton( this, wxID_ANY, g_txtAbout, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_btnAbout, 1, wxALL, 5 );

	bSizer1->Add( bSizer5, 0, wxEXPAND, 5 );

	//Now that I have all components I can set the sizer and draw them in the screen.
	this->SetSizer( bSizer1 );
	this->Layout();
}

MainScreen::~MainScreen()
{
}
