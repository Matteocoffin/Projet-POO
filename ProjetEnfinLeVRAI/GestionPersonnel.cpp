#include "GestionPersonnel.h"


namespace Service {
	Service::GestionPersonnel::GestionPersonnel()
	{
		this->cad = gcnew connexion();
		this->personnel = gcnew MapPersonnel();
		this->adresse = gcnew MapAdresse();
	}

	Service::GestionPersonnel::GestionPersonnel(int id)
	{
		this->cad = gcnew connexion();
		this->personnel = gcnew MapPersonnel(id);
		this->adresse = gcnew MapAdresse();
	}

	GestionPersonnel::GestionPersonnel(String^ adresse, String^ ville)
	{
		this->cad = gcnew connexion();
		this->personnel = gcnew MapPersonnel();
		this->adresse = gcnew MapAdresse(adresse, ville);
	}

	GestionPersonnel::GestionPersonnel(String^ nom, String^ prenom, String^ date, String^ adresse, String^ ville)
	{
		this->cad = gcnew connexion();
		this->personnel = gcnew MapPersonnel(nom, prenom, date);
		this->adresse = gcnew MapAdresse(adresse,ville);
	}

	Service::GestionPersonnel::GestionPersonnel(int id, String^ nom, String^ prenom, String^ date, String^ adresse, String^ ville)
	{
		this->cad = gcnew connexion();
		this->personnel = gcnew MapPersonnel(id, nom, prenom, date);
		this->adresse = gcnew MapAdresse(adresse, ville);
	}

	DataSet^ Service::GestionPersonnel::listePersonnel(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->personnel->SELECTALL(), dataname);
		return this->ds;
	}

	void Service::GestionPersonnel::UpdatePersonnel(String^ dataname)
	{
		this->cad->getRows(this->personnel->UPDATE(), dataname);
		this->cad->getRows(this->adresse->UPDATE(), dataname);
		MessageBox::Show("Utilisateur mis à jour");
	}

	void Service::GestionPersonnel::InsertPersonnel(String^ dataname)
	{
		this->cad->getRows(this->personnel->INSERT(), dataname);
		this->cad->getRows(this->adresse->INSERT(), dataname);
		this->cad = gcnew connexion(this->personnel->SELECTlast(), 1);
		int id_personnel = this->cad->GetIDINT();
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		this->cad->getRows(this->adresse->InsertPersonnel(id_personnel, id_adresse), dataname);
		MessageBox::Show("Succes creation Personnel");
	}

	void GestionPersonnel::AjouterAdresse()
	{
		this->cad->getRows(this->adresse->INSERT(), "personnel");
		this->cad = gcnew connexion(this->adresse->SELECTlast(), 3);
		int id_adresse = this->cad->GetIDINT();
		this->cad->getRows(this->adresse->InsertPersonnel(id_Personnel, id_adresse), "personnel");
		MessageBox::Show("ajout reussi");
	}

	DataSet^ Service::GestionPersonnel::SelectPersonnel(String^ dataname)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->personnel->SELECT(), dataname);
		this->cad = gcnew connexion(this->personnel->SELECT(),4);
		return this->ds;
	}

	void GestionPersonnel::AjouterDirigeant(int id_P)
	{
		this->cad->getRows(this->personnel->InsertDirige(id_P), "Client");
		MessageBox::Show("Dirigeant ajouter");
	}

	

	void Service::GestionPersonnel::supprimer()
	{
		this->cad = gcnew connexion(this->personnel->SELECT(), 4);
		int id_personnel = this->cad->GetIDINT();
		this->cad->getRows(this->adresse->DeletePersonnel(id_personnel), "Client");
		this->cad->getRows(this->personnel->DELETE(), "Client");
		this->cad->getRows(this->adresse->DELETE(), "Client");
		MessageBox::Show("Personnel Supprimer");
	}
	void GestionPersonnel::setID_Personnel(int i)
	{
		this->id_Personnel = i;
	}
}