#include <wx/string.h>

int main(int argc, char **argv)
{

    int flowers = 21;

    wxString str;
    str.Printf("There are %d red roses.", flowers);

    wxPuts(str);
}
