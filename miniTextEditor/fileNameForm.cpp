#include "fileNameForm.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main3()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew miniTextEditor::fileNameForm);
}
