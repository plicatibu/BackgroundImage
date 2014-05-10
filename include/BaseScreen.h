/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#ifndef BASE_SCREEN_H
#define BASE_SCREEN_H

#include <wx/wx.h>
#include "global_settings.h"

class BaseScreen : public wxPanel
{
   private:

   protected:
      wxStaticBitmap* m_bgImage;

   public:

      BaseScreen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = g_appSize, long style = wxTAB_TRAVERSAL );
      virtual ~BaseScreen();

};

#endif //BASE_SCREEN_H