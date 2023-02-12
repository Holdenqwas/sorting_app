///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class t_main
///////////////////////////////////////////////////////////////////////////////
class t_main : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_mainMenu;
		wxMenu* m_helpMenu;
		wxStatusBar* m_statusBar1;
		wxPanel* m_panel2;
		wxStaticText* m_staticText2;
		wxChoice* m_choiceTypeSort;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrlCountPoints;
		wxButton* m_buttonRun;
		wxButton* m_buttonMesh;

	public:

		t_main( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Сортировка"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,400 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~t_main();

};

