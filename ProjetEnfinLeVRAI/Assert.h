#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::Sql;
using namespace System::Data::SqlClient;
using namespace System::Data::SqlTypes;
using namespace Microsoft::SqlServer::Server;
using namespace System::Runtime::InteropServices;

ref class assert
{
private:bool affirme;
public:
	assert();
	void assertTrue(bool);
	void assertEqualFloat(float, float);
	void assertEqual(int, int);
	void assertEqualString(String^, String^);
	void assertDataSupZero(float);
	void assertDataEqualZero(float);
};
