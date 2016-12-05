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

void Agence::setAgeNom ( string new_var )   {
	ageNom = new_var;
}

string Agence::getAgeNom ( )   {
	return ageNom;
}

void Agence::setAgeAdresse ( string new_var )   {
	ageAdresse = new_var;
}

string Agence::getAgeAdresse ( )   {
	return ageAdresse;
}

void Agence::setAgeTelephone ( string new_var )   {
	ageTelephone = new_var;
}

string Agence::getAgeTelephone ( )   {
	return ageTelephone;
}

void Agence::setAgeFax ( string new_var )   {
	ageFax = new_var;
}

string Agence::getAgeFax ( )   {
	return ageFax;
}

void Agence::setAgeMail ( string new_var )   {
	ageMail = new_var;
}

string Agence::getAgeMail ( )   {
	return ageMail;
}

void Agence::setVectVehicule ( vector<Vehicule*> new_var )   {
	vectVehicule = new_var;
}

vector<Vehicule*> Agence::getVectVehicule ( )   {
	return vectVehicule;
}

void Agence::setVectSalarie ( vector<Salarie*> new_var )   {
	vectSalarie = new_var;
}

vector<Salarie*> Agence::getVectSalarie ( )   {
	return vectSalarie;
}

