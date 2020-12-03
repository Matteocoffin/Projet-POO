#pragma once
#include "Connexion.h"
#include "MapCommande.h"
namespace Service {
	ref class GestionCommande
	{
	private:connexion^ cad;
	private:MapCommande^ commande;
	private:DataSet^ ds;
	public:
		int static id_commande;
		GestionCommande();
		GestionCommande(int);
		GestionCommande(int, String^, String^, String^, String^, String^, String^, String^, String^,String^);
		GestionCommande(int, int, String^, String^, String^, String^, String^, String^, String^, String^,String^);
		void InsertCommande(String^);
		DataSet^ SelectCommande(String^);
		DataSet^ SelectCatalogue(String^);
		DataSet^ SelectDate(String^);
		DataSet^ listeCommande(String^);
		void deleteCommande(String^);
		void AjouterArticle(int id_produit);
		void AjouterDate(String^);
		void setID_Commande(int);


	};
}
