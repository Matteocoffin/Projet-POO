#include "MapAdresse.h"

void MapAdresse::ini_cp()
{
	if (ville == "Bordeaux") {
		this->Cp = "33000";
	}
	if (ville == "Eysines") {
		this->Cp = "33320";
	}
	if (ville == "Paris") {
		this->Cp = "75001";
	}
	if (ville == "Lyon") {
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

MapAdresse::MapAdresse(String^ adresse, String^ ville)
{
	this->Adresse = adresse;
	this->ville = ville;
	ini_cp();
}

MapAdresse::MapAdresse(int id, String^ adresse, String^ ville)
{
	this->id = id;
	this->Adresse = adresse;
	this->ville = ville;
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
	return "Update dbo.Adresse set Adresse='" + Adresse + "',Ville='" + ville + "',Cp='" + Cp + "' WHERE id_adresse=" + id + "";
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
	return "insert into dbo.Adresse values('" + Adresse + "','" + ville + "','" + Cp + "')";
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

void MapAdresse::setID(int id) {
	this->id = id;
}