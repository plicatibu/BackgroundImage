#include "BaseScreen.h"


IMPLEMENT_DYNAMIC_CLASS (BaseScreen, wxCustomBackgroundWindow<wxPanel>)

BEGIN_EVENT_TABLE(BaseScreen, wxCustomBackgroundWindow<wxPanel>)
    EVT_PAINT(BaseScreen::OnPaint)
END_EVENT_TABLE()

BaseScreen::BaseScreen()
{
    m_drawImage = NULL;
    m_xPos = 0;
}

BaseScreen::BaseScreen( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Create( parent, id, pos, size, style );
	wxImage::AddHandler( new wxPNGHandler );
	m_drawImage = m_bgImage.LoadFile( g_pathToBgImage, wxBITMAP_TYPE_PNG );

	if (m_drawImage) {
	    wxSize imgSize = m_bgImage.GetSize();
	    m_xPos = (g_appSize.GetWidth() - imgSize.GetWidth()) / 2;
	}

	this->Layout();
}


void BaseScreen::OnPaint(wxPaintEvent& event)
{
   wxPaintDC dc(this);

   if (m_drawImage) {
       dc.DrawBitmap(m_bgImage, wxPoint(m_xPos,0));
   }

}



BaseScreen::~BaseScreen()
{
}

