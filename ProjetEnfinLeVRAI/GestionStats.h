#pragma once
#include "mapStats.h" 
#include "connexion.h"



using namespace System::Data;

namespace Service {
	ref class GestionStats {
	private: MapStats^ Requete;
	private: DataSet^ dataset;
	private: connexion^ cad;

	public: GestionStats();

	public: DataSet^ Lier(String^);

	public: DataSet^ Panier();
	public: DataSet^ Mois(String^);
	public: DataSet^ Seuil();
	public: DataSet^ Client(String^);
	public: DataSet^ PVendu();
	public: DataSet^ MVendu();
	public: DataSet^ VCommercial();
	public: DataSet^ VStock();
	};
}