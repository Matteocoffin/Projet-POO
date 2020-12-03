#pragma once
#pragma once
#include "Connexion.h"
#include "MapStock.h"


namespace Service {
	ref class GestionStock
	{
	private:connexion^ cad;
	private:MapStock^ Stock;
	private:DataSet^ ds;
	private: int securite;
	public:
		GestionStock();
		GestionStock(int);
		GestionStock(String^, int, int, int, int, float);
		GestionStock(int, String^,int, int, int, int, float);
		DataSet^ listeStock(String^);
		void UpdateStock(String^);
		void InsertStock(String^);
		DataSet^ SelectStock(String^);
		void supprimer();
		String^ getID() { return cad->GetID(); }
		String^ getNom() { return cad->GetNom(); }
		String^ getQuantite() { return cad->GetQuantite(); }
		String^ getPrix() { return cad->GetPrix(); }
		String^ getStock() { return cad->GetStock(); }
		String^ getSeuil() { return cad->GetSeuil(); }
		String^ getTVA() { return cad->GetTVA(); }
		int getIDENTIER() { return cad->GetIDINT(); }
	};
}



