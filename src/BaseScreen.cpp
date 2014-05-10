/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#include "BaseScreen.h"

BaseScreen::BaseScreen( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) :
wxPanel( parent, id, pos, size, style )
{
	wxImage::AddHandler( new wxPNGHandler );
   wxBoxSizer* bSizer1;
   bSizer1 = new wxBoxSizer( wxVERTICAL );


   bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

   m_bgImage = new wxStaticBitmap( this, wxID_ANY, wxBitmap( g_pathToBgImage, wxBITMAP_TYPE_PNG ), wxDefaultPosition, wxDefaultSize, 0 );
   m_bgImage->SetMinSize( g_bgImageSize );
   m_bgImage->SetMaxSize( g_bgImageSize );

   bSizer1->Add( m_bgImage, 0, wxALIGN_CENTER, 5 );


   bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );


   this->SetSizer( bSizer1 );
   this->Layout();
}

BaseScreen::~BaseScreen()
{
}
