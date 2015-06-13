#include <wx/string.h>

int main(int argc, char **argv)
{

    wxString str = "The history of my life";

    if (str.Contains("history")) 
    {
        wxPuts("Contains!");
    }


    if (!str.Contains("plain")) 
    {
        wxPuts("Does not contain!");
    }
}
