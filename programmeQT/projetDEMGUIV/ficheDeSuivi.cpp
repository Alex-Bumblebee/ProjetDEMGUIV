#include "ficheDeSuivi.h"

// Constructors/Destructors
//  
FicheDeSuivi::FicheDeSuivi ( ) {
	initAttributes();
}

FicheDeSuivi::~FicheDeSuivi ( ) { }


// Methods
//  
void FicheDeSuivi::initAttributes ( ) {
}

void FicheDeSuivi::setFdsId ( int new_var )   {
	fdsId = new_var;
}

int FicheDeSuivi::getFdsId ( )   {
	return fdsId;
}

void FicheDeSuivi::setFdsType ( QString new_var )   {
	fdsType = new_var;
}

QString FicheDeSuivi::getFdsType ( )   {
	return fdsType;
}

void FicheDeSuivi::setFdsKilometrage ( int new_var )   {
	fdsKilometrage = new_var;
}

int FicheDeSuivi::getFdsKilometrage ( )   {
	return fdsKilometrage;
}

void FicheDeSuivi::setFdsDateDebut ( QString new_var )   {
	fdsDateDebut = new_var;
}

QString FicheDeSuivi::getFdsDateDebut ( )   {
	return fdsDateDebut;
}

void FicheDeSuivi::setFdsDateFin ( QString new_var )   {
	fdsDateFin = new_var;
}

QString FicheDeSuivi::getFdsDateFin ( )   {
	return fdsDateFin;
}

void FicheDeSuivi::setFdsInformationsSup ( QString new_var )   {
	fdsInformationsSup = new_var;
}

QString FicheDeSuivi::getFdsInformationsSup ( )   {
	return fdsInformationsSup;
}

void FicheDeSuivi::setFdsVehicule ( Vehicule* new_var )   {
	fdsVehicule = new_var;
}

Vehicule* FicheDeSuivi::getFdsVehicule ( )   {
	return fdsVehicule;
}

