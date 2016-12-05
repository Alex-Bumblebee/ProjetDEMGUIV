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

void Conge::setConDateDemande ( string new_var )   {
	conDateDemande = new_var;
}

string Conge::getConDateDemande ( )   {
	return conDateDemande;
}

void Conge::setConEtatDemande ( string new_var )   {
	conEtatDemande = new_var;
}

string Conge::getConEtatDemande ( )   {
	return conEtatDemande;
}

void Conge::setConDateReponse ( string new_var )   {
	conDateReponse = new_var;
}

string Conge::getConDateReponse ( )   {
	return conDateReponse;
}

void Conge::setConLibelle ( string new_var )   {
	conLibelle = new_var;
}

string Conge::getConLibelle ( )   {
	return conLibelle;
}

