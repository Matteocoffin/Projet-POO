#pragma once

using namespace System;

ref class MapStats
{
public: String^ Panier();
public: String^ Mois(String^);
public: String^ Seuil();
public: String^ Client(String^);
public: String^ PVendu();
public: String^ MVendu();
public: String^ VCommercial();
public: String^ VStock();

public: MapStats();
};