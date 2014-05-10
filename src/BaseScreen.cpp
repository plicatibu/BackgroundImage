/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#include "BaseScreen.h"

BaseScreen::BaseScreen( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style )
{
    Create( parent, id, pos, size, style );
    wxImage::AddHandler( new wxPNGHandler );

    m_drawImage = m_bgImage.LoadFile( g_pathToBgImage, wxBITMAP_TYPE_PNG );

    if (m_drawImage) {
        SetBackgroundBitmap(m_bgImage);
    }

}


BaseScreen::~BaseScreen()
{
}
