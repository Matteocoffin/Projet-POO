#pragma once
#include "Map.h"

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


ref class MapClient : public Map
{
private: int id_personnel;
public:
    MapClient(void);
    MapClient(int);
    MapClient(String^, String^, String^,int);
    MapClient(int, String^, String^, String^,int);
    String^ SELECTlast(void);
    virtual String^ SELECTALL(void) override;
    virtual String^ SELECT(void) override;
    String^ SELECTFacture(void);
    virtual String^ INSERT(void) override;
    virtual String^ UPDATE(void) override;
    virtual String^ DELETE(void) override;
};