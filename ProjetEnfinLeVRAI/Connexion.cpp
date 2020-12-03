#include "Connexion.h"


connexion::connexion() {
	connectionString = "Data Source = .; Initial Catalog = ProjetFinal; Integrated Security = True";
	this->sqlConnection = gcnew SqlConnection(this->connectionString);
	this->cmd = gcnew SqlCommand(this->requeteSQL, this->sqlConnection);
	this->cmd->CommandType = CommandType::Text;
	this->sqlConnection->Open();
	try {
	}
	catch (SqlException^ SqlEx)
	{
		MessageBox::Show("Erreur connexion");
	}
}

connexion::connexion(String^ requete, int etape)
{
	connectionString = "Data Source = .; Initial Catalog = ProjetFinal; Integrated Security = True";
	this->sqlConnection = gcnew SqlConnection(this->connectionString);
	this->cmd = gcnew SqlCommand(requete, this->sqlConnection);
	this->cmd->CommandType = CommandType::Text;
	this->sqlConnection->Open();
	try {
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			if (etape == 1) {
				initializeToGetHuman();
			}
			else if(etape == 2){
				initializeToGetStock();
			}
			else if (etape == 3) {
				initializeToGetAdresse();
			}
			else if (etape == 4) {
				initializeToGetPersonnelDate();
			}
			else if (etape == 5) {
				initializeToGetClientDate();
			}
			else if (etape == 6) {
				initializeToGetCatalogue();
			}
			else if (etape == 7) {
				initializeToGetCount();
			}
			else if (etape == 8) {
				initializeToGetArticle();
			}
			else if (etape == 9) {
				initializeToGetTVA();
			}
			else if (etape == 10) {
				initializeToDestroy();
			}
			
			
		}
	}
	catch (SqlException^ SqlEx)
	{
		MessageBox::Show("Erreur connexion");
	}
	this->sqlConnection->Close();
}

void connexion::setSQL(String^ requeteSQL) {
	this->requeteSQL = requeteSQL;
}

DataSet^ connexion::getRows(String^ requeteSQL, String^ dataTableName) {
	this->setSQL(requeteSQL);
	this->adapter = gcnew SqlDataAdapter(this->cmd);
	this->cmd->CommandText = this->requeteSQL;
	this->dataset = gcnew DataSet();
	this->adapter->Fill(this->dataset, dataTableName);
	return this->dataset;
}

void connexion::initializeToGetPersonnelDate() {
	int test = dr->GetInt32(0);
	id_entier = test;
	id = test.ToString();
	Nom = dr->GetString(1);
	Prenom = dr->GetString(2);
	SqlDateTime test2 = dr->GetDateTime(3);
	date = test2.ToString();
	rue = dr->GetString(8);
	Ville = dr->GetString(9);
}

void connexion::initializeToGetClientDate()
{
	int test = dr->GetInt32(0);
	id_entier = test;
	id = test.ToString();
	Nom = dr->GetString(1);
	Prenom = dr->GetString(2);
	SqlDateTime test2 = dr->GetDateTime(3);
	date = test2.ToString();
	rue = dr->GetString(8);
	Ville = dr->GetString(9);
}

void connexion::initializeToGetHuman() {
	int test = dr->GetInt32(0);
	id_entier = test;
	id = test.ToString();
	Nom = dr->GetString(1);
	Prenom = dr->GetString(2);
	SqlDateTime test2 = dr->GetDateTime(3);
	date = test2.ToString();
}


void connexion::initializeToGetStock()
{
	int test = dr->GetInt32(0);
	id_entier = test;
	id = test.ToString();
	Nom = dr->GetString(1);
	int test2 = dr->GetInt32(2);
	quantite = test2.ToString();
}

void connexion::initializeToGetAdresse()
{
	int test = dr->GetInt32(0);
	id_entier = test;
	Nom = dr->GetString(1);
}

void connexion::initializeToGetCatalogue()
{
	int test = dr->GetInt32(0);
	id_entier = test;
	Nom = dr->GetString(1);
	int test1 = dr->GetInt32(2);
	quantite = test1.ToString();
	int test2 = dr->GetInt32(4);
	Prix = test2.ToString();
	int test3 = dr->GetInt32(5);
	Stock = test3.ToString();
	int test4 = dr->GetInt32(6);
	Seuil = test4.ToString();
	float test5 = dr->GetDouble(7);
	TVA = test5.ToString();
}

void connexion::initializeToGetCount()
{
	id_entier = dr->GetInt32(0);
	id = id_entier.ToString();
}

void connexion::initializeToGetArticle()
{
	int test = dr->GetInt32(0);
	id_entier = test;
	id = test.ToString();
	Nom = dr->GetString(1);
	quantite = dr->GetInt32(2).ToString();
}

void connexion::initializeToGetTVA()
{
	float tva = dr->GetDouble(0);
}

void connexion::initializeToDestroy()
{
	id_date = dr->GetInt32(8);
	id_date_envoie = dr->GetInt32(9);
	id_date_reception = dr->GetInt32(10);
	id_facture = dr->GetInt32(11);
}

void connexion::actionRows(String^) {
}

int connexion::actionRowsID(String^ requestSQL)
{
	int id;
	this->setSQL(requestSQL);
	this->cmd->CommandText = this->requeteSQL;
	this->sqlConnection->Open();
	id = Convert::ToInt32(this->cmd->ExecuteScalar());
	this->sqlConnection->Close();
	return id;
}

String^ connexion::GetID()
{
	return id;
}

String^ connexion::GetNom()
{
	return Nom;
}

String^ connexion::GetPrenom()
{
	return Prenom;
}

int connexion::GetIDINT()
{
	return id_entier;
}

float connexion::GetFloat() {
	return tva;
}

String^ connexion::GetDate()
{
	return date;
}

String^ connexion::GetQuantite()
{
	return quantite;
}

String^ connexion::GetRue()
{
	return rue;
}

String^ connexion::GetVille()
{
	return Ville;
}

String^ connexion::Getid_personnel()
{
	return id_personnel;
}

