#include "GestionStock.h"
namespace Service {
	Service::GestionStock::GestionStock()
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock();
		this->teste = gcnew assert();
	}

	Service::GestionStock::GestionStock(int id)
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock(id);
		this->teste = gcnew assert();
	}

	GestionStock::GestionStock(String^ nom, int quantite, int stock, int seuil, int prix, float TVA)
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock(nom, quantite, stock, seuil, prix, TVA);
		this->teste = gcnew assert();
	}

	Service::GestionStock::GestionStock(int id, String^ nom, int quantite, int stock, int seuil, int prix, float TVA)
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock(id, nom, quantite, stock, seuil, prix, TVA);
		this->teste = gcnew assert();
	}

	DataSet^ Service::GestionStock::listeStock(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->Stock->SELECTALL(), dataname);
		return this->ds;
	}

	void Service::GestionStock::UpdateStock(String^ dataname)
	{
		int id = this->Stock->getID();
		//this->teste->assertEqual(id, 1);
		this->cad->getRows(this->Stock->UPDATE(), dataname);
		//this->teste->assertEqualString(this->Stock->UPDATE(),"Update dbo.Article set Nom_article=Banane,Quantite_nature=10 WHERE Id_article=1");
		this->cad->getRows(this->Stock->UPDATECatalogue(), dataname);
		//this->teste->assertEqualString(this->Stock->UPDATECatalogue(),"insert into dbo.Catalogue values(5,1000,400,0.2,1)");
		MessageBox::Show("Utilisateur mis à jour");
	}

	void Service::GestionStock::InsertStock(String^ dataname)
	{
	    this->cad->getRows(this->Stock->INSERT(), dataname);
		//this->teste->assertEqualString(this->Stock->INSERT(),"insert into dbo.Article values('Robe','1')");
		this->cad = gcnew connexion(this->Stock->SELECTlast(), 3);
		int id_Article = this->cad->GetIDINT();
		this->cad->getRows(this->Stock->INSERTCatalogue(id_Article), dataname);
		//this->teste->assertEqualString(this->Stock->INSERTCatalogue(id_Article),"insert into dbo.Catalogue values(50," 500,400,0.2,1)");
		//this->teste->assertEqual(id_Article,10);
		MessageBox::Show("Succes creation Stock");
	}

	DataSet^ Service::GestionStock::SelectStock(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->Stock->SELECT(), dataname);
		this->cad = gcnew connexion(this->Stock->SELECT(),6);
		//this->teste->assertEqual(this->cad->GetIDINT(),10);
		//this->teste->assertEqualString(this->cad->GetNom(),"banane");
		return this->ds;
	}

	void Service::GestionStock::supprimer()
	{
		this->cad->getRows(this->Stock->DELETECatalogue(), "Client");
		//this->teste->assertEqual(this->Stock->DELETECatalogue(),"delete from Catalogue WHERE Id_article=1");
		this->cad->getRows(this->Stock->DELETE(), "Client");
		//this->teste->assertEqual(this->Stock->DELETE(),"delete from Article WHERE Id_article=1");
		MessageBox::Show("Stock Supprimer");
	}
}