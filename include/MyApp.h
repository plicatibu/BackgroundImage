/**
 * @author Marcio Andrey Oliveira <plicatibu@plicatibu.com>
 * @copyright 2014 Plicatibu Software Developer Ltda.
 * @license {@link https://github.com/plicatibu/BackgroundImage/blob/master/LICENSE.md|MIT License}
 */
#ifndef MY_APP_H
#define MY_APP_H

#include <wx/wx.h>


class MyApp : public wxApp
{
    public:
        MyApp();
        virtual ~MyApp();

        bool OnInit();

    protected:
        wxFrame *frame;

    private:
};

DECLARE_APP(MyApp)

#endif // MY_APP_H
