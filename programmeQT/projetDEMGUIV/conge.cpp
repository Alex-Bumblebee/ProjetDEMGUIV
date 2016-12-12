#include "conge.h"

// Constructors/Destructors
//  
Conge::Conge ( ) {
	initAttributes();
}

Conge::~Conge ( ) { }


// Methods
//  
void Conge::initAttributes ( ) {
}


void Conge::setConId ( int new_var )   {
	conId = new_var;
}

int Conge::getConId ( )   {
	return conId;
}

void Conge::setConDateDemande ( QString new_var )   {
	conDateDemande = new_var;
}

QString Conge::getConDateDemande ( )   {
	return conDateDemande;
}

void Conge::setConEtatDemande ( QString new_var )   {
	conEtatDemande = new_var;
}

QString Conge::getConEtatDemande ( )   {
	return conEtatDemande;
}

void Conge::setConDateReponse ( QString new_var )   {
	conDateReponse = new_var;
}

QString Conge::getConDateReponse ( )   {
	return conDateReponse;
}

void Conge::setConLibelle ( QString new_var )   {
	conLibelle = new_var;
}

QString Conge::getConLibelle ( )   {
	return conLibelle;
}

