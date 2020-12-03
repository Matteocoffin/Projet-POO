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



ref class Map abstract
{
protected: int id;
protected: String^ Nom;
protected: String^ Prenom;
protected: String^ date;
protected: String^ viLLe;
public:
    int static id_num;
    Map(void);
    Map(int);
    Map(String^);
    Map(int, String^);
    Map(String^, String^, String^, String^);
    Map(int, String^, String^, String^, String^);
    Map(String^, String^, String^);
    Map(int, String^, String^, String^);
    virtual String^ SELECTALL(void) abstract;
    virtual String^ SELECT(void) abstract;
    virtual String^ INSERT(void) abstract;
    virtual String^ UPDATE(void) abstract;
    virtual String^ DELETE(void) abstract;
};


