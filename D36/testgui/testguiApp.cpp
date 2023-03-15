/***************************************************************
 * Name:      testguiApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Ace (krapahbless@gmail.com)
 * Created:   2023-03-15
 * Copyright: Ace ()
 * License:
 **************************************************************/

#include "testguiApp.h"

//(*AppHeaders
#include "testguiMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(testguiApp);

bool testguiApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	testguiFrame* Frame = new testguiFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
