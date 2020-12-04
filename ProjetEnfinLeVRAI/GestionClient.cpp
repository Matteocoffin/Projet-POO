#include "GestionClient.h"



namespace Service {
	Service::GestionClient::GestionClient()
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient();
		this->adresse = gcnew MapAdresse();
		this->teste = gcnew assert();
	}

	Service::GestionClient::GestionClient(int id)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient(id);
		this->adresse = gcnew MapAdresse();
		this->teste = gcnew assert();
	}

	GestionClient::GestionClient(String^ adresse, String^ ville)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient();
		this->adresse = gcnew MapAdresse(adresse, ville);
		this->teste = gcnew assert();
	}

	GestionClient::GestionClient(String^ adresseFacture, String^ villeFacture, String^ adresseLivraison, String^ villeLivraison)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient();
		this->adresse = gcnew MapAdresse(adresseLivraison, villeLivraison);
		this->adresseFacture = gcnew MapAdresse(adresseFacture, villeFacture);
		this->teste = gcnew assert();
	}

	GestionClient::GestionClient(String^ nom, String^ prenom, String^ date,int id_P, String^ adresseFacture, String^ villeFacture, String^ adresseLivraison, String^ villeLivraison)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient(nom, prenom, date, id_P);
		this->adresse = gcnew MapAdresse(adresseLivraison, villeLivraison);
		this->adresseFacture = gcnew MapAdresse(adresseFacture, villeFacture);
		this->teste = gcnew assert();
	}

	Service::GestionClient::GestionClient(int id, String^ nom, String^ prenom,String^ date, int id_P, String^ adresseFacture, String^ villeFacture, String^ adresseLivraison, String^ villeLivraison)
	{
		this->cad = gcnew connexion();
		this->client = gcnew MapClient(id, nom, prenom, date, id_P);
		this->adresse = gcnew MapAdresse(adresseLivraison, villeLivraison);
		this->adresseFacture = gcnew MapAdresse(adresseFacture, villeFacture);
		this->teste = gcnew assert();
	}

	DataSet^ Service::GestionClient::listeClient(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECTALL(), dataname);
		//this->teste->assertEqualString(this->client->SELECTALL(), "SELECT * FROM dbo.Client");
		return this->ds;
	}

	void Service::GestionClient::UpdateClient(String^ dataname)
	{
		this->cad = gcnew connexion(this->client->SELECT(), 4);
		int id = this->cad->GetINTAdresse();
		this->adresse->setID(id);
		//this->teste->assertEqual(id, 6);
		this->cad->getRows(this->client->UPDATE(), dataname);
		//this->teste->assertEqualString(this->client->UPDATE(),"Update dbo.Client set Nom_client='Coffus',Prenom_client='Mattus',date_anniversaire='2001-01-20',Id_personnel=7 WHERE Id_client=14");
		this->cad->getRows(this->adresse->UPDATE(), dataname);
		//this->teste->assertEqualString(this->adresse->UPDATE(),"Update dbo.Adresse set Adresse='2 rue de riz',Ville='Eysiness',Cp='33320' WHERE id_adresse=6");
		this->cad->getRows(this->adresseFacture->UPDATE(), dataname);
		//this->teste->assertEqualString(adresseFacture->UPDATE(),"Update dbo.Adresse set Adresse='8 rue de riz',Ville='Eysiness',Cp='33320' WHERE id_adresse=6");
		MessageBox::Show("Utilisateur mis à jour");
	}

	void Service::GestionClient::InsertClient(String^ dataname)
	{
		this->cad->getRows(this->client->INSERT(), dataname);
		//this->teste->assertEqualString(this->client->INSERT(),"insert into dbo.Client values('Coffin','Matteo','2001-01-19',2");
		this->cad->getRows(this->adresse->INSERT(), dataname);
		//this->teste->assertEqualString(this->adresse->INSERT(),"insert into dbo.Adresse values('25 rue pierre Gauthier','Eysines','33320')");
		this->cad = gcnew connexion(this->client->SELECTlast(), 1);
		int id_Client = this->cad->GetIDINT();
		//this->teste->assertEqual(id_Client,14);
		//this->teste->assertEqualString(this->cad->GetNom(),"Coffin");
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		//this->teste->assertEqual(id_adresse, 20);
		this->cad->getRows(this->adresseFacture->INSERT(), dataname);
		//this->teste->assertEqualString(this->adresseFacture->INSERT(),"insert into dbo.Adresse values('25 rue pierre Gauthier','Eysines','33320')");
		this->cad2 = gcnew connexion(this->adresseFacture->SELECTlast(), 3);
		int id_adresse_Facture = this->cad2->GetIDINT();
		//this->teste->assertEqual(id_adresse_Facture, 21);
		this->cad->getRows(this->adresse->InsertClient(id_Client, id_adresse), dataname);
		//this->teste->assertEqualString(this->adresse->InsertClient(id_Client, id_adresse),"insert into dbo.AdresseClient values(5,8))");
		this->cad2->getRows(this->adresse->InsertClientFacture(id_Client, id_adresse_Facture), dataname);
		//this->teste->assertEqualString(this->adresse->InsertClientFacture(id_Client, id_adresse_Facture),"insert into dbo.AdresseFacturer values(5,10)");
		MessageBox::Show("Succes creation Client ");
	}

	void GestionClient::AjouterAdresseFacture()
	{
		this->cad->getRows(this->adresse->INSERT(), "Client");
		//this->teste->assertEqualString(this->adresse->INSERT(),"insert into dbo.Adresse values('25 rue pierre Gauthier','Eysines','33320')");
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		//this->teste->assertEqual(id_adresse, 21);
		this->cad->getRows(this->adresse->InsertClientFacture(id_Client, id_adresse), "Client");
		MessageBox::Show("ajout reussi adresse Facture");
	}

	void GestionClient::AjouterAdresse()
	{
		this->cad->getRows(this->adresse->INSERT(), "Client");
		//this->teste->assertEqualString(this->adresse->INSERT(),"insert into dbo.Adresse values('40 rue paul Gauthier','Eysines','33320')");
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		//this->teste->assertEqual(id_adresse, 21);
		this->cad->getRows(this->adresse->InsertClient(id_Client, id_adresse), "Client");
		//this->teste->assertEqualString(this->adresse->InsertClient(id_Client, id_adresse),"insert into dbo.AdresseClient values(9,5)");
		MessageBox::Show("ajout reussi adresse Livraison");
	}

	DataSet^ Service::GestionClient::SelectClient(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECT(), dataname);
		this->cad = gcnew connexion(this->client->SELECT(),4);
		//this->teste->assertEqualString(this->cad->GetNom(), "Gorge");
		return this->ds;
	}

	DataSet^ Service::GestionClient::SelectClientFacture(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECTFacture(), dataname);
		this->cad = gcnew connexion(this->client->SELECTFacture(), 5);
		//this->teste->assertEqualString(this->cad->GetNom(), "Gorge");
		return this->ds;
	}

	void Service::GestionClient::supprimer()
	{
		this->cad = gcnew connexion(this->client->SELECT(), 5);
		int id_Client = this->cad->GetIDINT();
		//this->teste->assertEqual(id_Client, 21);
		this->cad->getRows(this->adresse->DeleteClient(id_Client), "Client");
		//this->teste->assertEqualString(this->adresse->DeleteClient(id_Client),"delete from dbo.AdresseClient WHERE id_client=5");
		this->cad->getRows(this->adresse->DeleteClientFacture(id_Client), "Client");
		//this->teste->assertEqualString(this->adresse->DeleteClientFacture(id_Client),"delete from dbo.AdresseFacturer WHERE id_client=5");
		this->cad->getRows(this->client->DELETE(), "Client");
		//this->teste->assertEqualString(this->client->DELETE(),"delete from Client WHERE Id_client=5");
		this->cad->getRows(this->adresse->DELETE(), "Client");
		//this->teste->assertEqualString(this->adresse->DELETE(),"delete from dbo.Adresse WHERE id_adresse="12");
		MessageBox::Show("Client Supprimer");
	}
	void GestionClient::setID_Client(int i)
	{
		this->id_Client = i;
	}
}