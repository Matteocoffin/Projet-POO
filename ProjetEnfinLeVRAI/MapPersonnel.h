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


ref class MapPersonnel : public Map
{

public:
    int static id_num;
    MapPersonnel(void);
    MapPersonnel(int);
    MapPersonnel(String^, String^, String^);
    MapPersonnel(int, String^, String^, String^);
    String^ SELECTlast(void);
    virtual String^ SELECTALL(void) override;
    virtual String^ SELECT(void) override;
    virtual String^ INSERT(void) override;
    virtual String^ UPDATE(void) override;
    virtual String^ DELETE(void) override;
    String^ InsertDirige(int);
};


