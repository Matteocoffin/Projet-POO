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

ref class connexion
{
private: String^ connectionString;
private: SqlConnection^ sqlConnection;
private: String^ requeteSQL;
private: SqlCommand^ cmd;
private: DataSet^ dataset;
private: SqlDataAdapter^ adapter;
private: SqlException^ SqlEx;
private: SqlDataReader^ dr;
private:
	void setSQL(String^);
	String^ id;
	String^ Nom;
	String^ Prenom;	
	String^ date;
	String^ rue;
	String^ Ville;
	String^ quantite;
	String^ id_personnel;
	String^ Stock;
	String^ Seuil;
	String^ Prix;
	String^ TVA;
	int id_date;
	int id_date_envoie;
	int id_date_reception;
	int id_entier;
	int id_facture;
	float tva;
public:
	connexion();
	connexion(String^,int);
	DataSet^ getRows(String^, String^);
	void initializeToGetPersonnelDate();
	void initializeToGetClientDate();
	void actionRows(String^);
	int actionRowsID(String^);
	void initializeToGetHuman();
	void initializeToGetStock();
	void initializeToGetAdresse();
	void initializeToGetCatalogue();
	void initializeToGetCount();
	void initializeToGetArticle();
	void initializeToGetTVA();
	void initializeToDestroy();
	String^ GetID();
	String^ GetNom();
	String^ GetPrenom();
	String^ GetDate();
	String^ GetQuantite();
	String^ GetRue();
	String^ GetVille();
	String^ Getid_personnel();
	String^ GetStock() { return Stock; }
	String^ GetSeuil() { return Seuil; }
	String^ GetPrix() { return Prix; }
	String^ GetTVA() { return TVA; }
	int GetIdDate() { return id_date; }
	int GetIdDateEnvoie() { return id_date_envoie; }
	int GetIdDateRecep() { return id_date_reception; }
	int GetIdFacture() { return id_facture; }
	int GetIDINT();
	int GetINTAdresse();
	float GetFloat();
};

