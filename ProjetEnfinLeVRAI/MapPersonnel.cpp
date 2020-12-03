#include "MapPersonnel.h"

MapPersonnel::MapPersonnel(void)
{}

MapPersonnel::MapPersonnel(int id) : Map(id)
{}

MapPersonnel::MapPersonnel(String^ nom, String^ prenom, String^ date) : Map(nom, prenom, date)
{}

MapPersonnel::MapPersonnel(int id, String^ nom, String^ prenom, String^ date) : Map(id, nom, prenom, date)
{}

String^ MapPersonnel::SELECTlast(void)
{
    return "select * From dbo.Personnel where Id_personnel=(SELECT max(Id_personnel) from dbo.Personnel)";
}

String^ MapPersonnel::SELECTALL(void)
{
    return "SELECT * FROM dbo.Personnel";
}

String^ MapPersonnel::SELECT(void)
{
    return "SELECT * FROM dbo.Personnel inner join dbo.AdressePersonnel on  AdressePersonnel.Id_personnel = Personnel.Id_personnel inner join dbo.Adresse on Adresse.Id_adresse = AdressePersonnel.Id_adresse where Personnel.Id_personnel="+ id +"";
}

String^ MapPersonnel::INSERT(void)
{
    return "insert into dbo.Personnel values('" + Nom + "','" + Prenom + "','" + date + "',NULL)";
}

String^ MapPersonnel::UPDATE(void)
{
    return "Update dbo.Personnel set Nom_personnel='" + Nom + "',Prenom_personnel='" + Prenom + "',date_embauche='" + date + "' WHERE Id_personnel=" + id + "";
}

String^ MapPersonnel::DELETE(void)
{
    return "delete from Personnel WHERE Id_personnel=" + id + "";
}

String^ MapPersonnel::InsertDirige(int id_P)
{
    return "Update dbo.Personnel set id_personnel_Dirige = " + id + " where Id_personnel=" + id_P + "";
}
