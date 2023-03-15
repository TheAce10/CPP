/***************************************************************
 * Name:      testguiMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ace (krapahbless@gmail.com)
 * Created:   2023-03-15
 * Copyright: Ace ()
 * License:
 **************************************************************/

#ifndef TESTGUIMAIN_H
#define TESTGUIMAIN_H

//(*Headers(testguiFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class testguiFrame: public wxFrame
{
    public:

        testguiFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~testguiFrame();

    private:

        //(*Handlers(testguiFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(testguiFrame)
        static const long ID_BUTTON1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(testguiFrame)
        wxButton* Button1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TESTGUIMAIN_H
