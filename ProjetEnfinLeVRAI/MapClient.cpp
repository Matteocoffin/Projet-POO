#include "MapClient.h"

MapClient::MapClient(void) : Map()
{
}

MapClient::MapClient(String^ nom, String^ prenom, String^ date, int id_P) : Map(nom, prenom, date)
{
    id_personnel = id_P;
}

MapClient::MapClient(int id) : Map(id)
{}

MapClient::MapClient(int id, String^ nom, String^ prenom,String^ date,int id_P) : Map(id,nom,prenom,date)
{
    id_personnel = id_P;
}

String^ MapClient::SELECTlast(void)
{
    return "select * From dbo.Client where Id_client=(SELECT max(Id_client) from dbo.Client)";
}

String^ MapClient::SELECTALL(void)
{
    return "SELECT * FROM dbo.Client";
}

String^ MapClient::SELECT(void)
{
    return "Select * from dbo.client inner join dbo.AdresseClient on AdresseClient.Id_client = client.Id_client inner join dbo.Adresse on Adresse.Id_adresse = AdresseClient.Id_adresse where Client.Id_client =" + id + "";
}

String^ MapClient::SELECTFacture(void)
{
    return "Select * from dbo.client inner join dbo.AdresseFacturer on AdresseFacturer.Id_client = client.Id_client inner join dbo.Adresse on Adresse.Id_adresse = AdresseFacturer.Id_adresse where Client.Id_client =" + id + "";
}


String^ MapClient::INSERT(void)
{
    return "insert into dbo.Client values('" + Nom + "','" + Prenom + "','" + date + "',"+ id_personnel +")";
}

String^ MapClient::UPDATE(void)
{
    return "Update dbo.Client set Nom_client='" + Nom + "',Prenom_client='" + Prenom + "',date_anniversaire='" + date + "',Id_personnel="+ id_personnel +" WHERE Id_client=" + id + "";
}

String^ MapClient::DELETE(void)
{
    return "delete from Client WHERE Id_client=" + id + "";
}