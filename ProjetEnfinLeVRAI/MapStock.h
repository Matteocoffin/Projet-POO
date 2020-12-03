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

ref class MapStock : public Map
{
private: int Quantite;
private: int Quantite_Stock;
private: int Seuil;
private: int HT;
private: float TVA;
public:
    MapStock(void);
    MapStock(int);
    MapStock(String^, int,int,int,int,float);
    MapStock(int, String^, int, int, int, int, float);
    virtual String^ SELECTALL(void) override;
    virtual String^ SELECT(void) override;
    String^ SELECTlast(void);
    virtual String^ INSERT(void) override;
    String^ INSERTCatalogue(int);
    virtual String^ UPDATE(void) override;
    String^ UPDATECatalogue(void);
    virtual String^ DELETE(void) override;
    String^ DELETECatalogue(void);
    int getID();
};

