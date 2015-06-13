#include <wx/string.h>

int main(int argc, char **argv)
{
    wxString str1 = "Linux";
    wxString str2 = "Operating";
    wxString str3 = "System";

    wxString str = str1 + " " + str2 + " " + str3;

    wxPuts(str);
}
