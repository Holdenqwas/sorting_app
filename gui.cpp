///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

t_main::t_main( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_label_top = new wxStaticText( this, wxID_ANY, wxT("Текст"), wxDefaultPosition, wxDefaultSize, 0 );
	m_label_top->Wrap( -1 );
	bSizer4->Add( m_label_top, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer1->Add( bSizer4, 1, wxEXPAND, 1 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_butt_change = new wxButton( this, wxID_ANY, wxT("Изменить"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_butt_change, 1, wxALL, 5 );

	m_butt_reset = new wxButton( this, wxID_ANY, wxT("Сбросить"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_butt_reset, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer1->Add( bSizer2, 1, wxSHAPED, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_label_bot = new wxStaticText( this, wxID_ANY, wxT("Начальный текст"), wxDefaultPosition, wxDefaultSize, 0 );
	m_label_bot->Wrap( -1 );
	bSizer3->Add( m_label_bot, 1, wxALIGN_CENTER, 1 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_butt_change->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( t_main::m_butt_changeOnButtonClick ), NULL, this );
	m_butt_reset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( t_main::m_butt_resetOnButtonClick ), NULL, this );
}

t_main::~t_main()
{
	// Disconnect Events
	m_butt_change->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( t_main::m_butt_changeOnButtonClick ), NULL, this );
	m_butt_reset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( t_main::m_butt_resetOnButtonClick ), NULL, this );

}

void t_main::m_butt_changeOnButtonClick( wxCommandEvent& event )
{
	m_label_top->SetLabel(wxT("Текст изменен"));
}

void t_main::m_butt_resetOnButtonClick( wxCommandEvent& event )
{
	m_label_top->SetLabel(wxT("Начальный текст"));
}
