#include "main.h"
#include "simple.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Simple *simple = new Simple("Simple");
    simple->Show(true);

    return true;
}
