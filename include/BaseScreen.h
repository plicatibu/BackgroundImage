#ifndef BASE_SCREEN_H
#define BASE_SCREEN_H

#include <wx/wx.h>
#include <wx/custombgwin.h>

#include "global_settings.h"

class BaseScreen : public wxCustomBackgroundWindow<wxPanel>
{
    DECLARE_DYNAMIC_CLASS (BaseScreen)

	private:

	protected:
		wxBitmap m_bgImage;
		bool m_drawImage;
		int m_xPos;

	public:

		BaseScreen();
		BaseScreen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = g_appSize, long style = wxTAB_TRAVERSAL );
		virtual ~BaseScreen();
		void OnPaint(wxPaintEvent& event);
		DECLARE_EVENT_TABLE()
};

#endif //BASE_SCREEN_H
