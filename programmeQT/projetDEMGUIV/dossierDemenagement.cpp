#include "dossierDemenagement.h"

// Constructors/Destructors
//  
DossierDemenagement::DossierDemenagement ( ) {
	initAttributes();
}

DossierDemenagement::~DossierDemenagement ( ) { }


// Methods
//
void DossierDemenagement::initAttributes ( ) {
}

void DossierDemenagement::setDosNumero ( int new_var )   {
	dosNumero = new_var;
}

int DossierDemenagement::getDosNumero ( )   {
	return dosNumero;
}

void DossierDemenagement::setDosDateOuverture ( string new_var )   {
	dosDateOuverture = new_var;
}

string DossierDemenagement::getDosDateOuverture ( )   {
	return dosDateOuverture;
}

void DossierDemenagement::setDosDateDebutDem ( string new_var )   {
	dosDateDebutDem = new_var;
}

string DossierDemenagement::getDosDateDebutDem ( )   {
	return dosDateDebutDem;
}

void DossierDemenagement::setDosDateFinDem ( string new_var )   {
	dosDateFinDem = new_var;
}

string DossierDemenagement::getDosDateFinDem ( )   {
	return dosDateFinDem;
}

void DossierDemenagement::setDosVolume ( float new_var )   {
	dosVolume = new_var;
}

float DossierDemenagement::getDosVolume ( )   {
	return dosVolume;
}

void DossierDemenagement::setDosNbKm ( float new_var )   {
	dosNbKm = new_var;
}

float DossierDemenagement::getDosNbKm ( )   {
	return dosNbKm;
}

void DossierDemenagement::setDosAdresseChargement ( string new_var )   {
	dosAdresseChargement = new_var;
}

string DossierDemenagement::getDosAdresseChargement ( )   {
	return dosAdresseChargement;
}

void DossierDemenagement::setDosAdresseLivraison ( string new_var )   {
	dosAdresseLivraison = new_var;
}

string DossierDemenagement::getDosAdresseLivraison ( )   {
	return dosAdresseLivraison;
}

void DossierDemenagement::setDosEtatDossier ( string new_var )   {
	dosEtatDossier = new_var;
}

string DossierDemenagement::getDosEtatDossier ( )   {
	return dosEtatDossier;
}

void DossierDemenagement::setDosNbDemenageur ( int new_var )   {
	dosNbDemenageur = new_var;
}

int DossierDemenagement::getDosNbDemenageur ( )   {
	return dosNbDemenageur;
}

void DossierDemenagement::setDosDateCloture ( string new_var )   {
	dosDateCloture = new_var;
}

string DossierDemenagement::getDosDateCloture ( )   {
	return dosDateCloture;
}

void DossierDemenagement::setVectDemenageurs ( vector<Demenageur*> new_var )   {
	vectDemenageurs = new_var;
}

vector<Demenageur*> DossierDemenagement::getVectDemenageurs ( )   {
	return vectDemenageurs;
}

void DossierDemenagement::setDosChefEquipe ( Demenageur* new_var )   {
	dosChefEquipe = new_var;
}

Demenageur* DossierDemenagement::getDosChefEquipe ( )   {
	return dosChefEquipe;
}

void DossierDemenagement::setDosCommercial ( Commercial* new_var )   {
	dosCommercial = new_var;
}

Commercial* DossierDemenagement::getDosCommercial ( )   {
	return dosCommercial;
}

void DossierDemenagement::setVectVehicule ( vector<Vehicule*> new_var )   {
	vectVehicule = new_var;
}

vector<Vehicule*> DossierDemenagement::getVectVehicule ( )   {
	return vectVehicule;
}

