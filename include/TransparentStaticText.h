/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#ifndef TRANSPARENT_STATIC_TEXT_H
#define TRANSPARENT_STATIC_TEXT_H

#include <wx/wx.h>
#include "BaseScreen.h"

class TransparentStaticText: public wxStaticText {

	DECLARE_DYNAMIC_CLASS (TransparentStaticText)

	public:
		TransparentStaticText();
		TransparentStaticText(wxWindow* parent, wxWindowID id,
		                      const wxString& label, const wxPoint& pos = wxDefaultPosition,
                              const wxSize& size = wxDefaultSize, long style = 0,
                              const wxString& name = wxStaticTextNameStr);

		bool Create(wxWindow* parent, wxWindowID id, const wxString& label,
		            const wxPoint& pos = wxDefaultPosition,
		            const wxSize& size = wxDefaultSize,
		            long style = 0,
		            const wxString& name= wxStaticTextNameStr);
		   virtual void OnPaint(wxPaintEvent& event);
		   DECLARE_EVENT_TABLE()
};

#endif //TRANSPARENT_STATIC_TEXT_H
