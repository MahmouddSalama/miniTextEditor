#include "textEdit.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main1()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew miniTextEditor::textEdit);
}

