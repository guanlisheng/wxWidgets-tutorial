#include "main.h"
#include "icon.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Icon *icon = new Icon("Icon");
    icon->Show(true);

    return true;
}
