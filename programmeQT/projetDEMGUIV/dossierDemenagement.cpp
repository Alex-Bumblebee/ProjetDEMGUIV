#include "dossierDemenagement.h"

// Constructors/Destructors
//  
DossierDemenagement::DossierDemenagement ( ) {
	initAttributes();
}

DossierDemenagement::DossierDemenagement(int monId, QString dateDebut, QString dateFin, int volume, QString adresseChargement, QString adresseLivraison)
{
    dosNumero=monId;
    dosDateDebutDem=dateDebut;
    dosDateFinDem=dateFin;
    dosVolume=volume;
    dosAdresseChargement=adresseChargement;
    dosAdresseLivraison=adresseLivraison;
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

void DossierDemenagement::setDosDateOuverture ( QString new_var )   {
	dosDateOuverture = new_var;
}

QString DossierDemenagement::getDosDateOuverture ( )   {
	return dosDateOuverture;
}

void DossierDemenagement::setDosDateDebutDem ( QString new_var )   {
	dosDateDebutDem = new_var;
}

QString DossierDemenagement::getDosDateDebutDem ( )   {
	return dosDateDebutDem;
}

void DossierDemenagement::setDosDateFinDem ( QString new_var )   {
	dosDateFinDem = new_var;
}

QString DossierDemenagement::getDosDateFinDem ( )   {
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

void DossierDemenagement::setDosAdresseChargement ( QString new_var )   {
	dosAdresseChargement = new_var;
}

QString DossierDemenagement::getDosAdresseChargement ( )   {
	return dosAdresseChargement;
}

void DossierDemenagement::setDosAdresseLivraison ( QString new_var )   {
	dosAdresseLivraison = new_var;
}

QString DossierDemenagement::getDosAdresseLivraison ( )   {
	return dosAdresseLivraison;
}

void DossierDemenagement::setDosEtatDossier ( QString new_var )   {
	dosEtatDossier = new_var;
}

QString DossierDemenagement::getDosEtatDossier ( )   {
	return dosEtatDossier;
}

void DossierDemenagement::setDosNbDemenageur ( int new_var )   {
	dosNbDemenageur = new_var;
}

int DossierDemenagement::getDosNbDemenageur ( )   {
	return dosNbDemenageur;
}

void DossierDemenagement::setDosDateCloture ( QString new_var )   {
	dosDateCloture = new_var;
}

QString DossierDemenagement::getDosDateCloture ( )   {
	return dosDateCloture;
}

void DossierDemenagement::setVectDemenageurs ( QVector<Demenageur*> new_var )   {
	vectDemenageurs = new_var;
}

QVector<Demenageur*> DossierDemenagement::getVectDemenageurs ( )   {
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

void DossierDemenagement::setVectVehicule ( QVector<Vehicule*> new_var )   {
	vectVehicule = new_var;
}

QVector<Vehicule*> DossierDemenagement::getVectVehicule ( )   {
	return vectVehicule;
}

