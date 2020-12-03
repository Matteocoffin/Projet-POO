#include "MapStock.h"


MapStock::MapStock(void)
{}

MapStock::MapStock(int id) : Map(id)
{}

MapStock::MapStock(String^ nom, int quantite,int stock,int seuil,int prix,float TVA) : Map(nom)
{
    this->Quantite = quantite;
    this->Quantite_Stock = stock;
    this->Seuil = seuil;
    this->HT = prix;
    this->TVA = TVA;
}

MapStock::MapStock(int id, String^ nom, int quantite, int stock, int seuil, int prix, float TVA) : Map(id,nom)
{
    this->Quantite = quantite;
    this->Quantite_Stock = stock;
    this->Seuil = seuil;
    this->HT = prix;
    this->TVA = TVA;
}


String^ MapStock::SELECTALL(void)
{
    return "SELECT * FROM dbo.Article";
}

String^ MapStock::SELECT(void)
{
    return "SELECT * FROM dbo.Article inner join dbo.Catalogue on Catalogue.Id_article = Article.Id_article where Article.Id_article=" + id + "";
}

String^ MapStock::SELECTlast(void)
{
    return "select * From dbo.Article where Id_article=(SELECT max(Id_article) from dbo.Article)";
}

String^ MapStock::INSERT(void)
{
    return "insert into dbo.Article values('" + Nom + "','" + Quantite + "')";
}

String^ MapStock::INSERTCatalogue(int id_article)
{
    return "insert into dbo.Catalogue values(" + HT + "," + Quantite_Stock + "," + Seuil + "," + TVA + ","+id_article+")";
}

String^ MapStock::UPDATE(void)
{
    return "Update dbo.Article set Nom_article='" + Nom + "',Quantite_nature='" + Quantite + "' WHERE Id_article=" + id + "";
}

String^ MapStock::UPDATECatalogue(void)
{
    return "Update dbo.Catalogue set Prix_HT=" + HT + ",Quantite_stock=" + Quantite_Stock + ",Seuil_reapprovision="+Seuil+",Taux_TVA="+TVA+" WHERE Id_article=" + id + "";
}

String^ MapStock::DELETE(void)
{
    return "delete from Article WHERE Id_article=" + id + "";
}

String^ MapStock::DELETECatalogue(void)
{
    return "delete from Catalogue WHERE Id_article=" + id + "";
}

int MapStock::getID()
{
    return id;
}
