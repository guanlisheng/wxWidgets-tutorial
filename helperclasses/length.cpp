#include <wx/string.h>

int main(int argc, char **argv)
{
    wxString str = "The history of my life";
    wxPrintf("The string has %d characters\n", str.Len());
}
