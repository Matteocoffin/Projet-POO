#include "MapStats.h"

String^ MapStats::Panier() {
	return "SELECT AVG(Total_TTC) as panierMoyen from Commande";
}

String^ MapStats::Mois(String^ NomMois)
{
	return "SELECT SUM(TOTAL_TTC) as Total_Achat FROM " +
		"((SELECT Id_commande, Date " +
		"FROM date_Payer " +
		"LEFT JOIN " +
		"(SELECT * " +
		"FROM Date WHERE MONTH(DATE) = '" + NomMois + "') " +
		"AS DateMois " +
		"ON DateMois.Id_date = date_Payer.Id_date) " +
		"AS DateMoisCommande " +
		"LEFT JOIN " +
		"(SELECT Id_commande, TOTAL_TTC " +
		"FROM Commande) " +
		"AS Prix " +
		"ON DateMoisCommande.Id_commande = Prix.Id_commande)";

}

String^ MapStats::Seuil()
{
	return "SELECT Nom_article, Article.Id_article FROM " +
		"(SELECT Catalogue.Id_article " +
		"FROM Catalogue " +
		"WHERE Seuil_reapprovision > Quantite_stock) " +
		"AS StockVide " +
		"Left JOIN Article " +
		"ON Article.Id_article = StockVide.Id_article";
}

String^ MapStats::Client(String^ NomClient)
{
	return "SELECT Client.Id_client, Client.Nom_client, Client.Prenom_client, SUM(TOTAL_TTC) as TotalPaye FROM Client LEFT JOIN Commande ON Commande.Id_client = Client.Id_client WHERE Client.Nom_client='" + NomClient + "' GROUP BY Client.Id_client,Client.Nom_client, Client.Prenom_client";
}

String^ MapStats::PVendu()
{
	return "SELECT TOP 10 Article.Id_article, Article.Nom_article, COUNT(*) as NombreVendu FROM Article_commande LEFT JOIN Article ON Article_commande.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.Nom_article ORDER BY NombreVendu DESC";
}

String^ MapStats::MVendu()
{
	return "SELECT TOP 10 Article.Id_article, Article.Nom_article, COUNT(*) as NombreVendu FROM Article_commande LEFT JOIN Article ON Article_commande.Id_article = Article.Id_article GROUP BY Article.Id_article, Article.Nom_article ORDER BY NombreVendu ASC";
}

String^ MapStats::VCommercial()
{
	return "SELECT SUM(Prix_HT*Taux_TVA*Quantite_stock) as ValeurCommercial " +
		"FROM Catalogue";
}

String^ MapStats::VStock()
{
	return "SELECT SUM(Prix_HT*Quantite_stock) as ValeurStock " +
		"FROM Catalogue";
}

String^ MapStats::Simuler(int NTVA, float TVA, float Marge, float Reduc, float Autre)
{
	return "SELECT SUM(((Catalogue.Prix_HT*Catalogue.Taux_TVA*" + NTVA + "*Catalogue.Quantite_stock + (Catalogue.Prix_HT*" + TVA + "*Catalogue.Quantite_stock))*" + Marge + "*" + Reduc + "*" + Autre + ")) as Stats FROM Catalogue";
}

MapStats::MapStats() {}

