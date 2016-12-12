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

void Salarie::setSalNom ( QString new_var )   {
	salNom = new_var;
}

QString Salarie::getSalNom ( )   {
	return salNom;
}

void Salarie::setSalPrenom ( QString new_var )   {
	salPrenom = new_var;
}

QString Salarie::getSalPrenom ( )   {
	return salPrenom;
}

void Salarie::setSalDateNaissance ( QString new_var )   {
	salDateNaissance = new_var;
}

QString Salarie::getSalDateNaissance ( )   {
	return salDateNaissance;
}

void Salarie::setSalDateEmbauche ( QString new_var )   {
	salDateEmbauche = new_var;
}

QString Salarie::getSalDateEmbauche ( )   {
	return salDateEmbauche;
}

void Salarie::setSalAdresse ( QString new_var )   {
	salAdresse = new_var;
}

QString Salarie::getSalAdresse ( )   {
	return salAdresse;
}

void Salarie::setSalAgence ( Agence* new_var )   {
	salAgence = new_var;
}

Agence* Salarie::getSalAgence ( )   {
	return salAgence;
}

void Salarie::setVectAbsence ( QVector<Absence*> new_var )   {
	vectAbsence = new_var;
}

QVector<Absence*> Salarie::getVectAbsence ( )   {
	return vectAbsence;
}

