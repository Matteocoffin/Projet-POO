#include "GestionStats.h"


namespace Service {

    GestionStats::GestionStats() {
        this->Requete = gcnew MapStats();
        this->cad = gcnew connexion();
        this->teste = gcnew assert();
    }


    DataSet^ Service::GestionStats::Lier(String^ Requete) {
        this->dataset = gcnew DataSet();
        this->dataset = this->cad->getRows(Requete, "stats");
        //this->teste->assertEqualString(Requete, "SELECT AVG(Total_TTC) as panierMoyen from Commande");
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


    float extraire(float tab[], bool tabB[]) {
        float retour = 1;
        int n;
        for (n = 0; n < 3; n++) {
            if (0 < tab[n] * tabB[n]) {
                retour = tab[n] * tabB[n];
            }
        }
        return retour;
    }

    DataSet^ Service::GestionStats::Simuler(float TVA, bool Marge1, bool Marge2, bool Marge3, bool Remise1, bool Remise2, bool AutreD1, bool AutreD2, bool AutreD3) {

        bool TabBMarge[3] = { Marge1, Marge2, Marge3 };
        bool TabBRemise[3] = { Remise1, Remise2, 0 };
        bool TabBAutre[3] = { AutreD1, AutreD2, AutreD3 };

        float TabMarge[3] = { 1.05, 1.10, 1.15 };
        float TabRemise[3] = { 0.95, 0.94 , 1 };
        float TabAutre[3] = { 1.02, 1.03, 1.05 };

        float Marge = extraire(TabMarge, TabBMarge);
        float Reduc = extraire(TabRemise, TabBRemise);
        float Autre = extraire(TabAutre, TabBAutre);
        //this->teste->assertEqualFloat(Marge,1.05);
        //this->teste->assertEqualFloat(Reduc, 0.95);
        //this->teste->assertEqualFloat(Autre, 1.02);

        int NTVA = 1;
        if (TVA != 0) {
            NTVA = 0;
        }

        return Lier(this->Requete->Simuler(NTVA, TVA, Marge, Reduc, Autre));
    }

}
