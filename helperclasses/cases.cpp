#include <wx/string.h>

int main(int argc, char **argv)
{
    wxString str = "The history of my life";

    wxPuts(str.MakeLower());
    wxPuts(str.MakeUpper());
}
