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

	m_menubar1 = new wxMenuBar( 0 );
	m_mainMenu = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_mainMenu, wxID_ANY, wxString( wxT("Запустить") ) , wxEmptyString, wxITEM_NORMAL );
	m_mainMenu->Append( m_menuItem1 );

	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_mainMenu, wxID_ANY, wxString( wxT("Выйти") ) , wxEmptyString, wxITEM_NORMAL );
	m_mainMenu->Append( m_menuItem2 );

	m_menubar1->Append( m_mainMenu, wxT("Главное меню") );

	m_helpMenu = new wxMenu();
	wxMenuItem* m_helpItem;
	m_helpItem = new wxMenuItem( m_helpMenu, wxID_ANY, wxString( wxT("Помощь") ) , wxEmptyString, wxITEM_NORMAL );
	m_helpMenu->Append( m_helpItem );

	wxMenuItem* m_aboutItem;
	m_aboutItem = new wxMenuItem( m_helpMenu, wxID_ANY, wxString( wxT("О приложении") ) , wxEmptyString, wxITEM_NORMAL );
	m_helpMenu->Append( m_aboutItem );

	m_menubar1->Append( m_helpMenu, wxT("?") );

	this->SetMenuBar( m_menubar1 );

	m_statusBar1 = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 100,-1 ), wxTAB_TRAVERSAL );
	bSizer7->Add( m_panel2, 1, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Тип сортировки"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer5->Add( m_staticText2, 0, wxALL, 5 );

	wxString m_choiceTypeSortChoices[] = { wxT("Пузырьковая"), wxT("Слиянием") };
	int m_choiceTypeSortNChoices = sizeof( m_choiceTypeSortChoices ) / sizeof( wxString );
	m_choiceTypeSort = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceTypeSortNChoices, m_choiceTypeSortChoices, 0 );
	m_choiceTypeSort->SetSelection( 0 );
	bSizer5->Add( m_choiceTypeSort, 0, wxALL, 5 );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Колличество значений"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer5->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrlCountPoints = new wxTextCtrl( this, wxID_ANY, wxT("1000"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_textCtrlCountPoints, 0, wxALL, 5 );


	bSizer4->Add( bSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonRun = new wxButton( this, wxID_ANY, wxT("Запустить"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_buttonRun, 0, wxALL, 5 );

	m_buttonMesh = new wxButton( this, wxID_ANY, wxT("Перемешать"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_buttonMesh, 0, wxALL, 5 );


	bSizer4->Add( bSizer8, 0, wxEXPAND, 5 );


	bSizer6->Add( bSizer4, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );
}

t_main::~t_main()
{
}
