#include "Functions.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main2()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew miniTextEditor::Functions);
}

