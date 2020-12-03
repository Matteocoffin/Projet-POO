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

ref class MapAdresse
{
private: int id;
private: String^ Adresse;
private: String^ AdresseFacture;
private: String^ ville;
private: String^ villeFacture;
private: String^ Cp;
private: int id_client;
private: void ini_cp();
public:
	MapAdresse();
	MapAdresse(int);
	MapAdresse(String^, String^);
	MapAdresse(int, String^, String^);
	String^ SELECTlast(void);
	String^ SELECT(void);
	String^ UPDATE(void);
	String^ DELETE(void);
	String^ DeletePersonnel(int);
	String^ DeleteClient(int);
	String^ DeleteClientFacture(int);
	String^ INSERT(void);
	String^ InsertPersonnel(int,int);
	String^ InsertClient(int, int);
	String^ InsertClientFacture(int, int);
	void setID(int);
};

