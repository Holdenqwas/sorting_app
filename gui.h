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
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class t_main
///////////////////////////////////////////////////////////////////////////////
class t_main : public wxFrame
{
	private:

	protected:
		wxStaticText* m_label_top;
		wxButton* m_butt_change;
		wxButton* m_butt_reset;
		wxStaticText* m_label_bot;

		// Virtual event handlers, override them in your derived class
		void m_butt_changeOnButtonClick( wxCommandEvent& event );
		void m_butt_resetOnButtonClick( wxCommandEvent& event );


	public:

		t_main( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("My gui"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 488,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~t_main();

};

