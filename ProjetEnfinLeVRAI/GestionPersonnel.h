#pragma once
#include "Connexion.h"
#include "MapPersonnel.h"
#include "MapAdresse.h"
#include "Assert.h"


namespace Service {
	ref class GestionPersonnel
	{
	private:connexion^ cad;
	private:MapPersonnel^ personnel;
	private:DataSet^ ds;
	private: MapAdresse^ adresse;
	private: int securite;
	private: assert^ teste;
	public:
		int static id_Personnel;
		GestionPersonnel();
		GestionPersonnel(int);
		GestionPersonnel(String^, String^);
		GestionPersonnel(String^, String^, String^, String^, String^);
		GestionPersonnel(int, String^, String^, String^,String^, String^);
		DataSet^ listePersonnel(String^);
		void UpdatePersonnel(String^);
		void InsertPersonnel(String^);
		void AjouterAdresse();
		DataSet^ SelectPersonnel(String^);
		void AjouterDirigeant(int);
		void supprimer(int);
		void setID_Personnel(int);
		String^ getID() { return cad->GetID(); }
		String^ getNom() { return cad->GetNom(); }
		String^ getPrenom() { return cad->GetPrenom(); }
		String^ getDate() { return cad->GetDate(); }
		String^ getRue() { return cad->GetRue(); }
		String^ getVille() { return cad->GetVille(); }
		int getIDENTIER() { return cad->GetIDINT(); }
	};
}

