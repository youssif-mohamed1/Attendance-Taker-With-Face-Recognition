#include "MyForm1.h"
//#include "Header.h"
//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	wait::MyForm1 frm;
	Application::Run(% frm);
}
