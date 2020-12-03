#include "MapAdresse.h"

void MapAdresse::ini_cp()
{
	if (Pays == "Bordeaux") {
		this->Cp = "33000";
	}
	if (Pays == "Eysines") {
		this->Cp = "33320";
	}
	if (Pays == "Paris") {
		this->Cp = "75001";
	}
	if (Pays == "Lyon") {
		this->Cp = "69001";
	}
}

MapAdresse::MapAdresse()
{
}

MapAdresse::MapAdresse(int id)
{
	this->id = id;
}

MapAdresse::MapAdresse(String^ adresse, String^ pays)
{
	this->Adresse = adresse;
	this->Pays = pays;
	ini_cp();
}

MapAdresse::MapAdresse(int id, String^ adresse, String^ pays)
{
	this->id = id;
	this->Adresse = adresse;
	this->Pays = pays;
	ini_cp();
}

String^ MapAdresse::SELECTlast(void)
{
	return "select * From dbo.Adresse where Id_adresse=(SELECT max(id_adresse) from dbo.Adresse)";
}

String^ MapAdresse::SELECT(void)
{
	return "SELECT * FROM dbo.Adresse";
}

String^ MapAdresse::UPDATE(void)
{
	return "Update dbo.Adresse set Adresse='" + Adresse + "',Pays='" + Pays + "',Cp='" + Cp + "' WHERE id_adresse=" + id + "";
}

String^ MapAdresse::DELETE(void)
{
	return "delete from dbo.Adresse WHERE id_adresse=" + id + "";
}

String^ MapAdresse::DeletePersonnel(int id_Personnel)
{
	return "delete from dbo.AdressePersonnel WHERE id_personnel=" + id_Personnel + "";
}

String^ MapAdresse::DeleteClient(int id_client)
{
	return "delete from dbo.AdresseClient WHERE id_client=" + id_client + "";
}

String^ MapAdresse::DeleteClientFacture(int id_client)
{
	return "delete from dbo.AdresseFacturer WHERE id_client=" + id_client + "";
}

String^ MapAdresse::INSERT(void)
{
	return "insert into dbo.Adresse values('" + Adresse + "','" + Pays + "','" + Cp + "')";
}

String^ MapAdresse::InsertPersonnel(int id_personnel,int id) {
	return "insert into dbo.AdressePersonnel values(" + id_personnel + "," + id + ")";
}

String^ MapAdresse::InsertClient(int id_client, int id) {
	return "insert into dbo.AdresseClient values(" + id + "," + id_client + ")";
}

String^ MapAdresse::InsertClientFacture(int id_client, int id) {
	return "insert into dbo.AdresseFacturer values(" + id_client + "," + id + ")";
}