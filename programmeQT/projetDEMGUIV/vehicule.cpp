#include "vehicule.h"

// Constructors/Destructors
//  
Vehicule::Vehicule ( ) {
	initAttributes();
}

Vehicule::~Vehicule ( ) { }


// Methods
//  
void Vehicule::initAttributes ( ) {
}

void Vehicule::setVehId ( int new_var )   {
	vehId = new_var;
}

int Vehicule::getVehId ( )   {
	return vehId;
}

void Vehicule::setVehImmat ( QString new_var )   {
	vehImmat = new_var;
}

QString Vehicule::getVehImmat ( )   {
	return vehImmat;
}

void Vehicule::setVehDateMiseCirculation ( QString new_var )   {
	vehDateMiseCirculation = new_var;
}

QString Vehicule::getVehDateMiseCirculation ( )   {
	return vehDateMiseCirculation;
}

void Vehicule::setVehVolumeUtile ( float new_var )   {
	vehVolumeUtile = new_var;
}

float Vehicule::getVehVolumeUtile ( )   {
	return vehVolumeUtile;
}

void Vehicule::setVehHayon ( bool new_var )   {
	vehHayon = new_var;
}

bool Vehicule::getVehHayon ( )   {
	return vehHayon;
}

void Vehicule::setVehCouchette ( bool new_var )   {
	vehCouchette = new_var;
}

bool Vehicule::getVehCouchette ( )   {
	return vehCouchette;
}

void Vehicule::setVehNbPlaceCabine ( int new_var )   {
	vehNbPlaceCabine = new_var;
}

int Vehicule::getVehNbPlaceCabine ( )   {
	return vehNbPlaceCabine;
}

void Vehicule::setVehType ( QString new_var )   {
	vehType = new_var;
}

QString Vehicule::getVehType ( )   {
	return vehType;
}

void Vehicule::setVehPTAC ( QString new_var )   {
	vehPTAC = new_var;
}

QString Vehicule::getVehPTAC ( )   {
	return vehPTAC;
}

void Vehicule::setVehFreqEntretien ( int new_var )   {
	vehFreqEntretien = new_var;
}

int Vehicule::getVehFreqEntretien ( )   {
	return vehFreqEntretien;
}

void Vehicule::setVehAgence ( Agence* new_var )   {
	vehAgence = new_var;
}

Agence* Vehicule::getVehAgence ( )   {
	return vehAgence;
}

void Vehicule::setVectFicheDeSuivi ( QVector<FicheDeSuivi*> new_var )   {
	vectFicheDeSuivi = new_var;
}

QVector<FicheDeSuivi*> Vehicule::getVectFicheDeSuivi ( )   {
	return vectFicheDeSuivi;
}

