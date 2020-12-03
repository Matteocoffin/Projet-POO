#include "MapCommande.h"



MapCommande::MapCommande(void)
{}

MapCommande::MapCommande(int id) : Map(id)
{}

MapCommande::MapCommande(int id_C, String^ dateCo, String^ dateEnv, String^ dateRec, String^ datePaie, String^ moyen,String^ nom,String^ prenom, String^ ville,String^ societe) : Map (nom, prenom, ville,dateCo)
{
    this->id_client = id_C;
    this->date_commande = dateCo;
    this->date_envoie = dateEnv;
    this->date_paiement = datePaie;
    this->date_reception = dateRec;
    this->moyen = moyen;
    this->nomSociete = societe;
    this->teste = gcnew assert();
    
}

MapCommande::MapCommande(int id_Commande, int id_C, String^ dateCo, String^ dateEnv, String^ dateRec, String^ datePaie, String^ moyen, String^ nom, String^ prenom, String^ ville,String^ societe) : Map(nom, prenom, ville, dateCo)
{
    this->id = id_Commande;
    this->id_client = id_C;
    this->date_commande = dateCo;
    this->date_envoie = dateEnv;
    this->date_paiement = datePaie;
    this->date_reception = dateRec;
    this->moyen = moyen;
    this->nomSociete = societe;
    
}

String^ MapCommande::SELECTALL(void)
{
    return "SELECT * FROM dbo.commande";
}

String^ MapCommande::SELECTCATALOGUE(void)
{
    return "SELECT Article.Nom_article,Article.Quantite_nature,catalogue.Prix_HT,catalogue.Quantite_stock,Catalogue.Seuil_reapprovision,Catalogue.Taux_TVA from catalogue inner join Article on Article.Id_article = catalogue.Id_article";
}

String^ MapCommande::SELECTToDestroy(void)
{
    return "SELECT * FROM dbo.Commande where Commande.Id_commande=" + id + "";
}

String^ MapCommande::SELECT(void)
{
    return "SELECT * FROM dbo.Commande inner join dbo.Article_commande on Article_commande.Id_commande = Commande.Id_commande inner join dbo.Article on Article.Id_article = Article_commande.Id_article where Commande.Id_commande=" + id + "";
}

String^ MapCommande::SELECTlastDate(void)
{
    return "select * From dbo.Date where Id_date=(SELECT max(Id_date) from dbo.Date)";
}

String^ MapCommande::SELECTlastFacture(void) {
    return "select * From dbo.Facture where Id_facture=(SELECT max(Id_facture) from dbo.Facture)";
}

String^ MapCommande::SELECTlastCommande(void) {
    return "select * From dbo.Commande where Id_commande=(SELECT max(Id_commande) from dbo.Commande)";
}

String^ MapCommande::INSERT(int id_date,int id_date_Envoyer,int id_date_Durer,int id_facture)
{
    return "insert into dbo.Commande values('',NULL,NULL,NULL,NULL,'"+moyen+"',"+ id_client +",'"+ id_date +"','"+ id_date_Envoyer +"','"+ id_date_Durer +"','"+ id_facture +"'); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERTFacture(void)
{
    return "insert into dbo.facture values('"+nomSociete+"'); SELECT @@IDENTITY";
}

String^ MapCommande::INSERTProduit(int id_Commande,int id_Produit)
{
    return "insert into dbo.Article_commande values("+id_Commande+","+id_Produit+"); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERTDateCommande()
{
    return "insert into dbo.Date values('" + date_commande + "'); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERTDateReception()
{
    return "insert into dbo.Date values('" + date_reception + "'); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERTDateEnvoie()
{
    return "insert into dbo.Date values('" + date_envoie + "'); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERTDatePayer()
{
    return "insert into dbo.Date values('" + date_paiement + "'); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERTajoutDate(String^ date)
{
    return "insert into dbo.Date values('" + date + "'); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::INSERT(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ MapCommande::UPDATE(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ MapCommande::INSERTDatePaiement(int id_commande,int id_date)
{
    return "insert into dbo.date_Payer values(" + id_commande + "," + id_date + "); SELECT @@IDENTITY AS 'Identity'";
}

String^ MapCommande::SELECTDATE()
{
    return "select date_Payer.Id_commande, Date.Date from date_Payer inner join Date on Date.Id_date = date_Payer.Id_date where date_Payer.Id_commande=" + id + "";
}


String^ MapCommande::SELECTTOTAL(int id_Commande)
{
    return "select COUNT(*) from Commande inner join Article_commande on Article_commande.Id_commande = Commande.Id_commande where Commande.Id_commande="+id_Commande+"";
}

String^ MapCommande::SELECTHT(int id_Commande)
{
    return "SELECT SUM(Prix_HT) from Catalogue inner join Article on Article.Id_article = Catalogue.Id_article inner join Article_commande on Article_commande.Id_article = Article.Id_article where Article_commande.Id_commande="+id_Commande+"";
}

String^ MapCommande::SELECTTVA(int id_Commande)
{
    return "SELECT SUM(Taux_TVA) from Catalogue inner join Article on Article.Id_article = Catalogue.Id_article inner join Article_commande on Article_commande.Id_article = Article.Id_article where Article_commande.Id_commande="+id_Commande+"";
}

void MapCommande::calculTVA(float tva,int nb,int ht) {
    this->tva = 0.2;
    this->TTC = ht + ht * this->tva;
    //this->teste->assertEqualFloat(tva, 0.2);
    //this->teste->assertEqual(TTC, 150);
}

String^ MapCommande::UPDATEToInsertNom(int id_commande,String^ name)
{
    return "Update dbo.Commande set Reference_commande='" + name + "' where Id_commande="+id_commande+"";
}

String^ MapCommande::UPDATEToInsertCalcul(int Total,int ht,int id_commande)
{
    return "Update dbo.Commande set Total_article="+Total+", Total_HT="+ht+", Total_TTC="+TTC+", Total_TVA="+tva+" where Id_commande="+ id_commande +"";
}

String^ MapCommande::UPDATEDate(void)
{
    return "Update dbo.date";
}

String^ MapCommande::DELETE(void)
{
    return "delete from Commande where Id_commande=" + id + "";
}

String^ MapCommande::DELETEDate(int id_date)
{
    return "delete from Date where date.Id_date=" + id_date + "";
}

String^ MapCommande::DELETEDatePaie(void)
{
    return "delete from date_Payer where date_Payer.Id_commande=" + id + "";
}

String^ MapCommande::DELETEArticle(void)
{
    return "delete from Article_commande where Id_commande=" + id + "";
}

String^ MapCommande::DELETEFacture(int id_facture)
{
    return "delete from Facture where Facture.Id_facture ="+ id +"";
}

String^ MapCommande::generateName(int id)
{
    
    String^ ComposantPrenom = Prenom->Substring(0, 2);
    //this->teste->assertEqualString(ComposantPrenom,"Go");
    String^ ComposantNom = Nom->Substring(0, 2);
    //this->teste->assertEqualString(ComposantNom, "Fa");
    String^ ComposantDate = (date_commande->ToString())->Substring(6);
    //this->teste->assertEqualString(ComposantDate, "2012");
    String^ ComposantVille = viLLe->Substring(0, 3);
    //this->teste->assertEqualString(ComposantVille, "Bor");
    String^ ComposantID = id.ToString();
    //this->teste->assertEqualString(ComposantID, "7");
    String^ name = ComposantPrenom + ComposantNom + ComposantDate + ComposantVille + ComposantID;
    return name;
   
}