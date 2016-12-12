#include "agence.h"

// Constructors/Destructors
//  
Agence::Agence ( ) {
	initAttributes();
}

Agence::~Agence ( ) { }


// Methods
//  
void Agence::initAttributes ( ) {
}

void Agence::setAgeId ( int new_var )   {
	ageId = new_var;
}

int Agence::getAgeId ( )   {
	return ageId;
}

void Agence::setAgeNom ( QString new_var )   {
	ageNom = new_var;
}

QString Agence::getAgeNom ( )   {
	return ageNom;
}

void Agence::setAgeAdresse ( QString new_var )   {
	ageAdresse = new_var;
}

QString Agence::getAgeAdresse ( )   {
	return ageAdresse;
}

void Agence::setAgeTelephone ( QString new_var )   {
	ageTelephone = new_var;
}

QString Agence::getAgeTelephone ( )   {
	return ageTelephone;
}

void Agence::setAgeFax ( QString new_var )   {
	ageFax = new_var;
}

QString Agence::getAgeFax ( )   {
	return ageFax;
}

void Agence::setAgeMail ( QString new_var )   {
	ageMail = new_var;
}

QString Agence::getAgeMail ( )   {
	return ageMail;
}

void Agence::setVectVehicule ( QVector<Vehicule*> new_var )   {
	vectVehicule = new_var;
}

QVector<Vehicule*> Agence::getVectVehicule ( )   {
	return vectVehicule;
}

void Agence::setVectSalarie ( QVector<Salarie*> new_var )   {
	vectSalarie = new_var;
}

QVector<Salarie*> Agence::getVectSalarie ( )   {
	return vectSalarie;
}

