#include "GestionCommande.h"

Service::GestionCommande::GestionCommande()
{
    this->cad = gcnew connexion();
    this->commande = gcnew MapCommande();
    this->teste = gcnew assert();
}

Service::GestionCommande::GestionCommande(int id)
{
    this->cad = gcnew connexion();
    this->commande = gcnew MapCommande(id);
    this->teste = gcnew assert();
}

Service::GestionCommande::GestionCommande(int id_C, String^ dateCo, String^ dateEnv, String^ dateRec, String^ datePaie, String^ moyen, String^ nom, String^ prenom, String^ ville,String^ Societe)
{
    this->cad = gcnew connexion();
    this->commande = gcnew MapCommande(id_C, dateCo, dateEnv, dateRec, datePaie, moyen, nom, prenom, ville,Societe);
    this->teste = gcnew assert();
}

Service::GestionCommande::GestionCommande(int id, int id_C, String^ dateCo, String^ dateEnv, String^ dateRec, String^ datePaie, String^ moyen, String^ nom, String^ prenom, String^ ville,String^ Societe)
{
    this->cad = gcnew connexion();
    this->commande = gcnew MapCommande(id,id_C, dateCo, dateEnv, dateRec, datePaie, moyen, nom, prenom, ville, Societe);
    this->teste = gcnew assert();
}

void Service::GestionCommande::InsertCommande(String^ dataname)
{
    this->cad->getRows(this->commande->INSERTFacture(), dataname);
    //this->teste->assertEqualString(this->commande->INSERTFacture(),"insert into dbo.facture values('EDF'); SELECT @@IDENTITY");
    this->cad = gcnew connexion(this->commande->SELECTlastFacture(), 7);
    int Id_facture = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_facture,14);
    this->cad->getRows(this->commande->INSERTDateCommande(), dataname);
    //this->teste->assertEqualString(this->commande->INSERTDateCommande(),"insert into dbo.Date values('2020-12-15'); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTlastDate(), 7);
    int Id_dateCommande = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_dateCommande,15);
    this->cad->getRows(this->commande->INSERTDateReception(), dataname);
    //this->teste->assertEqualString(this->commande->INSERTDateReception(),"insert into dbo.Date values('2020-12-20'); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTlastDate(), 7);
    int Id_dateReception = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_dateReception,16);
    this->cad->getRows(this->commande->INSERTDateEnvoie(), dataname);
    //this->teste->assertEqualString(this->commande->INSERTDateEnvoie(),"insert into dbo.Date values('2020-12-17'); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTlastDate(), 7);
    int Id_dateEnvoie = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_dateEnvoie,17);
    this->cad->getRows(this->commande->INSERTDatePayer(), dataname);
    //this->teste->assertEqualString(this->commande->INSERTDatePayer(),"insert into dbo.Date values('2020-12-22'); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTlastDate(), 7);
    int Id_datePayer = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_datePayer,18);
    this->cad->getRows(this->commande->INSERT(Id_dateCommande, Id_dateEnvoie, Id_dateReception, Id_facture), dataname);
    //this->teste->assertEqualString(this->commande->INSERT(Id_dateCommande, Id_dateEnvoie, Id_dateReception, Id_facture),"insert into dbo.Commande values('',NULL,NULL,NULL,NULL,'CB',5,1,2,3,2); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTlastCommande(), 7);
    int Id_commande = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_commande,10);
    this->cad->getRows(this->commande->INSERTDatePaiement(Id_commande, Id_datePayer), dataname);
    //this->teste->assertEqualString(this->commande->INSERTDatePaiement(Id_commande, Id_datePayer),"insert into dbo.date_Payer values(1,4); SELECT @@IDENTITY AS 'Identity'");
    this->cad->getRows(this->commande->UPDATEToInsertNom(Id_commande, this->commande->generateName(Id_commande)), dataname);
    //this->teste->assertEqualString(this->commande->UPDATEToInsertNom(Id_commande, this->commande->generateName(Id_commande)),"Update dbo.Commande set Reference_commande='MaCo2020Eys1' where Id_commande=1");
    MessageBox::Show("Creation de commande");
}

DataSet^ Service::GestionCommande::SelectCommande(String^ dataname)
{
    this->ds = gcnew DataSet();
    this->ds = this->cad->getRows(this->commande->SELECT(), dataname);
    this->cad = gcnew connexion(this->commande->SELECT(), 7);
    //this->teste->assertEqual(this->cad->GetIDINT(), 10);
    return this->ds;
}

DataSet^ Service::GestionCommande::SelectCatalogue(String^ dataname)
{
    this->ds = gcnew DataSet();
    this->ds = this->cad->getRows(this->commande->SELECTCATALOGUE(), dataname);
    return this->ds;
}

DataSet^ Service::GestionCommande::SelectDate(String^ dataname)
{
    this->ds = gcnew DataSet();
    this->ds = this->cad->getRows(this->commande->SELECTDATE(), dataname);
    return this->ds;
}

DataSet^ Service::GestionCommande::listeCommande(String^ dataname)
{
    this->ds = gcnew DataSet();
    this->ds = this->cad->getRows(this->commande->SELECTALL(), dataname);
    return this->ds;
}

void Service::GestionCommande::deleteCommande(String^ dataname)
{
    this->cad = gcnew connexion(this->commande->SELECTToDestroy(), 10);
    int id_date = this->cad->GetIdDate();
    int id_date_Envoie = this->cad->GetIdDateEnvoie();
    int id_date_Reception = this->cad->GetIdDateRecep();
    int id_facture = this->cad->GetIdFacture();
    this->cad->getRows(this->commande->DELETEDatePaie(), dataname);
    //this->teste->assertEqualString(this->commande->DELETEDatePaie(),"delete from date_Payer where date_Payer.Id_commande=1");
    this->cad->getRows(this->commande->DELETEArticle(), dataname);
    //this->teste->assertEqualString(this->commande->DELETEArticle(),"delete from Article_commande where Id_commande=1");
    this->cad->getRows(this->commande->DELETE(), dataname);
    //this->teste->assertEqualString(this->commande->DELETE(),"delete from Commande where Id_commande=1");
    this->cad->getRows(this->commande->DELETEDate(id_date), dataname);
    //this->teste->assertEqualString(this->commande->DELETEDate(id_date),"delete from Date where date.Id_date=1");
    this->cad->getRows(this->commande->DELETEDate(id_date_Envoie), dataname);
    //this->teste->assertEqualString(this->commande->DELETEDate(id_date_Envoie),"delete from Date where date.Id_date=2");
    this->cad->getRows(this->commande->DELETEDate(id_date_Reception), dataname);
    //this->teste->assertEqualString(this->commande->DELETEDate(id_date_Reception),"delete from Date where date.Id_date=3");
    //this->cad->getRows(this->commande->DELETEFacture(id_facture), dataname);

    //this->teste->assertEqual(id_date, 14);
    //this->teste->assertEqual(id_date_Envoie, 15);
    //this->teste->assertEqual(id_date_Reception, 16);
    //this->teste->assertEqual(id_facture, 17);
    MessageBox::Show("suppression reussite");
}

void Service::GestionCommande::AjouterArticle(int id_produit)
{
    this->cad->getRows(this->commande->INSERTProduit(id_commande, id_produit), "commande");
    //this->teste->assertEqualString(this->commande->INSERTProduit(id_commande, id_produit),"insert into dbo.Article_commande values("1","2"); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTTOTAL(id_commande), 7);
    int total = this->cad->GetIDINT();
    //this->teste->assertEqual(total, 5);
    this->cad = gcnew connexion(this->commande->SELECTHT(id_commande), 7);
    int HT = this->cad->GetIDINT();
    //this->teste->assertEqual(HT, 100);
    this->cad = gcnew connexion(this->commande->SELECTTVA(id_commande), 9);
    float TVA = this->cad->GetFloat();
    //this->teste->assertEqualFloat(TVA, 0.2);
    this->commande->calculTVA(TVA, total, HT);
    this->cad->getRows(this->commande->UPDATEToInsertCalcul(total, HT, id_commande),"Commande");
    //this->teste->assertEqualString(this->commande->UPDATEToInsertCalcul(total, HT, id_commande),"Update dbo.Commande set Total_article=1, Total_HT=10, Total_TTC=10.2, Total_TVA=0.2 where Id_commande=1");
    MessageBox::Show("ajout de produit reussi");
}

void Service::GestionCommande::AjouterDate(String^ date)
{
    this->cad->getRows(this->commande->INSERTajoutDate(date), "Commande");
    //this->teste->assertEqualString(this->commande->INSERTajoutDate(date),"insert into dbo.Date values('2020-05-12'); SELECT @@IDENTITY AS 'Identity'");
    this->cad = gcnew connexion(this->commande->SELECTlastDate(), 7);
    int Id_datePayer = this->cad->GetIDINT();
    //this->teste->assertEqual(Id_datePayer, 19);
    this->cad->getRows(this->commande->INSERTDatePaiement(id_commande, Id_datePayer), "Commande");
    //this->teste->assertEqualString(this->commande->INSERTDatePaiement(id_commande, Id_datePayer),"insert into dbo.date_Payer values(1,4); SELECT @@IDENTITY AS 'Identity'");
    MessageBox::Show("ajout de date reussi");
}



void Service::GestionCommande::setID_Commande(int i)
{
    this->id_commande = i;
}
 

