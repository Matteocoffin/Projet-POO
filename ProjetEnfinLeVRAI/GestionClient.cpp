#include "GestionClient.h"



namespace Service {
	Service::GestionClient::GestionClient()
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient();
		this->adresse = gcnew MapAdresse();
	}

	Service::GestionClient::GestionClient(int id)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient(id);
		this->adresse = gcnew MapAdresse();
	}

	GestionClient::GestionClient(String^ adresse, String^ ville)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient();
		this->adresse = gcnew MapAdresse(adresse, ville);
	}

	GestionClient::GestionClient(String^ adresseFacture, String^ villeFacture, String^ adresseLivraison, String^ villeLivraison)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient();
		this->adresse = gcnew MapAdresse(adresseLivraison, villeLivraison);
		this->adresseFacture = gcnew MapAdresse(adresseFacture, villeFacture);
	}

	GestionClient::GestionClient(String^ nom, String^ prenom, String^ date,int id_P, String^ adresseFacture, String^ villeFacture, String^ adresseLivraison, String^ villeLivraison)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient(nom, prenom, date, id_P);
		this->adresse = gcnew MapAdresse(adresseLivraison, villeLivraison);
		this->adresseFacture = gcnew MapAdresse(adresseFacture, villeFacture);
	}

	Service::GestionClient::GestionClient(int id, String^ nom, String^ prenom,String^ date, int id_P, String^ adresseFacture, String^ villeFacture, String^ adresseLivraison, String^ villeLivraison)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient(id, nom, prenom, date, id_P);
		this->adresse = gcnew MapAdresse(adresseLivraison, villeLivraison);
		this->adresseFacture = gcnew MapAdresse(adresseFacture, villeFacture);
	}

	DataSet^ Service::GestionClient::listeClient(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECTALL(), dataname);
		return this->ds;
	}

	void Service::GestionClient::UpdateClient(String^ dataname)
	{
		this->cad->getRows(this->client->UPDATE(), dataname);
		this->cad->getRows(this->adresse->UPDATE(), dataname);
		this->cad->getRows(this->adresseFacture->UPDATE(), dataname);
		MessageBox::Show("Utilisateur mis à jour");
	}

	void Service::GestionClient::InsertClient(String^ dataname)
	{
		this->cad->getRows(this->client->INSERT(), dataname);
		this->cad->getRows(this->adresse->INSERT(), dataname);
		this->cad = gcnew connexion(this->client->SELECTlast(), 1);
		int id_Client = this->cad->GetIDINT();
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		this->cad->getRows(this->adresseFacture->INSERT(), dataname);
		this->cad2 = gcnew connexion(this->adresseFacture->SELECTlast(), 3);
		int id_adresse_Facture = this->cad2->GetIDINT();
		this->cad->getRows(this->adresse->InsertClient(id_Client, id_adresse), dataname);
		this->cad2->getRows(this->adresse->InsertClientFacture(id_Client, id_adresse_Facture), dataname);
		MessageBox::Show("Succes creation Client");
	}

	void GestionClient::AjouterAdresseFacture()
	{
		this->cad->getRows(this->adresse->INSERT(), "Client");
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		this->cad->getRows(this->adresse->InsertClientFacture(id_Client, id_adresse), "Client");
		MessageBox::Show("ajout reussi adresse Facture");
	}

	void GestionClient::AjouterAdresse()
	{
		this->cad->getRows(this->adresse->INSERT(), "Client");
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		this->cad->getRows(this->adresse->InsertClient(id_Client, id_adresse), "Client");
		MessageBox::Show("ajout reussi adresse Livraison");
	}

	DataSet^ Service::GestionClient::SelectClient(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECT(), dataname);
		this->cad = gcnew connexion(this->client->SELECT(),4);
		return this->ds;
	}

	DataSet^ Service::GestionClient::SelectClientFacture(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECTFacture(), dataname);
		this->cad = gcnew connexion(this->client->SELECTFacture(), 5);
		return this->ds;
	}

	void Service::GestionClient::supprimer()
	{
		this->cad = gcnew connexion(this->client->SELECT(), 5);
		int id_Client = this->cad->GetIDINT();
		this->cad->getRows(this->adresse->DeleteClient(id_Client), "Client");
		this->cad->getRows(this->adresse->DeleteClientFacture(id_Client), "Client");
		this->cad->getRows(this->client->DELETE(), "Client");
		this->cad->getRows(this->adresse->DELETE(), "Client");
		MessageBox::Show("Client Supprimer");
	}
	void GestionClient::setID_Client(int i)
	{
		this->id_Client = i;
	}
}