#pragma once
#include "Connexion.h"
#include "MapClient.h"
#include "MapAdresse.h"
#include "Assert.h"

namespace Service {
	ref class GestionClient
	{
	private:connexion^ cad;
	private:connexion^ cad2;
	private:MapClient^ client;
	private:DataSet^ ds;
	private: MapAdresse ^ adresse;
	private: MapAdresse^ adresseFacture;
	private: int securite;
	private: assert^ teste;
	public:
		int static id_Client;
		GestionClient();
		GestionClient(int);
		GestionClient(String^, String^);
		GestionClient(String^, String^, String^, String^);
		GestionClient(String^, String^, String^,int, String^, String^, String^, String^);
		GestionClient(int, String^, String^,String^, int, String^, String^, String^, String^);
		DataSet^ listeClient(String^);
		void UpdateClient(String^);
		void InsertClient(String^);
		void AjouterAdresseFacture();
		void AjouterAdresse();
		DataSet^ SelectClient(String^);
		DataSet^ SelectClientFacture(String^);
		void supprimer();
		void setID_Client(int);
		String^ getID() { return cad->GetID(); }
		String^ getNom() { return cad->GetNom(); }
		String^ getPrenom() { return cad->GetPrenom(); }
		String^ getDate() { return cad->GetDate(); }
		String^ getRue() { return cad->GetRue(); }
		String^ getVille() { return cad->GetVille(); }
		String^ getPersonnel() { return cad->Getid_personnel(); }
		int getIDENTIER() { return cad->GetIDINT(); }
	};
}
