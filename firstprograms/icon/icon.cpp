#include "icon.h"

Icon::Icon(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
    SetIcon(wxIcon("web.xpm"));
    Centre();
}
