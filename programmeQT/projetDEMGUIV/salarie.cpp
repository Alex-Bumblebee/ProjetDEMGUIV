#include "salarie.h"

// Constructors/Destructors
//  
Salarie::Salarie ( ) {
	initAttributes();
}

Salarie::~Salarie ( ) { }


// Methods
//
void Salarie::initAttributes ( ) {
}

void Salarie::setSalId ( int new_var )   {
	salId = new_var;
}

int Salarie::getSalId ( )   {
	return salId;
}

void Salarie::setSalNom ( string new_var )   {
	salNom = new_var;
}

string Salarie::getSalNom ( )   {
	return salNom;
}

void Salarie::setSalPrenom ( string new_var )   {
	salPrenom = new_var;
}

string Salarie::getSalPrenom ( )   {
	return salPrenom;
}

void Salarie::setSalDateNaissance ( string new_var )   {
	salDateNaissance = new_var;
}

string Salarie::getSalDateNaissance ( )   {
	return salDateNaissance;
}

void Salarie::setSalDateEmbauche ( string new_var )   {
	salDateEmbauche = new_var;
}

string Salarie::getSalDateEmbauche ( )   {
	return salDateEmbauche;
}

void Salarie::setSalAdresse ( string new_var )   {
	salAdresse = new_var;
}

string Salarie::getSalAdresse ( )   {
	return salAdresse;
}

void Salarie::setSalAgence ( Agence* new_var )   {
	salAgence = new_var;
}

Agence* Salarie::getSalAgence ( )   {
	return salAgence;
}

void Salarie::setVectAbsence ( vector<Absence*> new_var )   {
	vectAbsence = new_var;
}

vector<Absence*> Salarie::getVectAbsence ( )   {
	return vectAbsence;
}

