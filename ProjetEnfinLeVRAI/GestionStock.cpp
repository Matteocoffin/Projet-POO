#include "GestionStock.h"
namespace Service {
	Service::GestionStock::GestionStock()
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock();
	}

	Service::GestionStock::GestionStock(int id)
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock(id);
	}

	GestionStock::GestionStock(String^ nom, int quantite, int stock, int seuil, int prix, float TVA)
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock(nom, quantite, stock, seuil, prix, TVA);
	}

	Service::GestionStock::GestionStock(int id, String^ nom, int quantite, int stock, int seuil, int prix, float TVA)
	{
		this->cad = gcnew connexion();
		this->Stock = gcnew MapStock(id, nom, quantite, stock, seuil, prix, TVA);
	}

	DataSet^ Service::GestionStock::listeStock(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->Stock->SELECTALL(), dataname);
		return this->ds;
	}

	void Service::GestionStock::UpdateStock(String^ dataname)
	{
		this->cad->getRows(this->Stock->UPDATE(), dataname);
		this->cad->getRows(this->Stock->UPDATECatalogue(), dataname);
		MessageBox::Show("Utilisateur mis à jour");
	}

	void Service::GestionStock::InsertStock(String^ dataname)
	{
	    this->cad->getRows(this->Stock->INSERT(), dataname);
		this->cad = gcnew connexion(this->Stock->SELECTlast(), 3);
		int id_Article = this->cad->GetIDINT();
		this->cad->getRows(this->Stock->INSERTCatalogue(id_Article), dataname);
		MessageBox::Show("Succes creation Stock");
	}

	DataSet^ Service::GestionStock::SelectStock(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->Stock->SELECT(), dataname);
		this->cad = gcnew connexion(this->Stock->SELECT(),6);
		return this->ds;
	}

	void Service::GestionStock::supprimer()
	{
		this->cad->getRows(this->Stock->DELETECatalogue(), "Client");
		this->cad->getRows(this->Stock->DELETE(), "Client");
		MessageBox::Show("Stock Supprimer");
	}
}