#include "GestionStats.h"


namespace Service {

    GestionStats::GestionStats() {
        this->Requete = gcnew MapStats();
        this->cad = gcnew connexion();
    }


    DataSet^ Service::GestionStats::Lier(String^ Requete) {
        this->dataset = gcnew DataSet();
        this->dataset = this->cad->getRows(Requete, "stats");
        return this->dataset;
    }

    DataSet^ Service::GestionStats::Panier()
    {
        return Lier(this->Requete->Panier());
    }

    DataSet^ Service::GestionStats::Mois(String^ NomMois)
    {
        return Lier(this->Requete->Mois(NomMois));
    }

    DataSet^ Service::GestionStats::Seuil()
    {
        return Lier(this->Requete->Seuil());
    }

    DataSet^ Service::GestionStats::Client(String^ NomClient)
    {
        return Lier(this->Requete->Client(NomClient));
    }

    DataSet^ Service::GestionStats::PVendu()
    {
        return Lier(this->Requete->PVendu());
    }

    DataSet^ Service::GestionStats::MVendu()
    {
        return Lier(this->Requete->MVendu());
    }

    DataSet^ Service::GestionStats::VCommercial()
    {
        return Lier(this->Requete->VCommercial());
    }

    DataSet^ Service::GestionStats::VStock()
    {
        return Lier(this->Requete->VStock());
    }
}