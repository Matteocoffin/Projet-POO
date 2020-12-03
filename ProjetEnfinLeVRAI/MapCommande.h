#pragma once
#include "Map.h"
#include "Assert.h"

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


ref class MapCommande : public Map
{
private: int id_client;
private: String^ date_commande;
private: String^ date_envoie;
private: String^ date_reception;
private: String^ date_paiement;
private: String^ moyen;
private: double tva;
private: float TTC;
private: String^ nomSociete;
private: assert^ teste;
public:
	
	MapCommande(void);
	MapCommande(int);
	MapCommande(int, String^, String^, String^, String^, String^, String^, String^, String^,String^);
	MapCommande(int,int, String^, String^, String^, String^, String^, String^, String^, String^,String^);
    virtual String^ SELECTALL(void) override;
	String^ SELECTCATALOGUE(void);
	String^ SELECTToDestroy(void);
	virtual String^ SELECT(void) override;
	String^ SELECTlastDate(void);
	String^ SELECTlastFacture(void);
	String^ SELECTlastCommande(void);
	String^ INSERT(int, int, int,int);
	String^ INSERTFacture(void);
	String^ INSERTProduit(int, int);
	String^ INSERTDateCommande();
	String^ INSERTDateReception();
	String^ INSERTDateEnvoie();
	String^ INSERTDatePayer();
	String^ INSERTajoutDate(String^);
	virtual String^ INSERT(void) override;
	virtual String^ UPDATE(void) override;
	String^ INSERTDatePaiement(int , int );
	String^ SELECTDATE();
	String^ SELECTTOTAL(int);
	String^ SELECTHT(int);
	String^ SELECTTVA(int);
	void calculTVA(float,int, int);
	String^ UPDATEToInsertNom(int, String^);
	String^ UPDATEToInsertCalcul(int,int,int);
	String^ UPDATEDate(void);
	virtual String^ DELETE(void) override;
	String^ DELETEDate(int);
	String^ DELETEDatePaie(void);
	String^ DELETEArticle(void);
	String^ DELETEFacture(int);
	String^ generateName(int);
};

