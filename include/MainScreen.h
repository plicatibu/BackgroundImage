/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#ifndef MAIN_SCREEN_H
#define MAIN_SCREEN_H

#include <wx/wx.h>
#include "global_settings.h"
#include "BaseScreen.h"

class TransparentStaticText;

class MainScreen : public BaseScreen
{
	private:

	protected:
        TransparentStaticText *m_txtTitle;
		wxButton *m_btnFile;
		wxButton *m_btnImport;
		wxButton *m_btnExport;
		wxButton *m_btnAbout;


	public:

		MainScreen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = g_appSize, long style = wxTAB_TRAVERSAL );
		virtual ~MainScreen();

};


#endif // MAIN_SCREEN_H
