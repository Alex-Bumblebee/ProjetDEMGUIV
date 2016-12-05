#include "demenageur.h"

// Constructors/Destructors
//  
Demenageur::Demenageur ( ) {
	initAttributes();
}

Demenageur::~Demenageur ( ) { }


// Methods
// 
void Demenageur::initAttributes ( ) {
}

void Demenageur::setDemPermis ( string new_var )   {
	demPermis = new_var;
}

string Demenageur::getDemPermis ( )   {
	return demPermis;
}

void Demenageur::setDemChef ( bool new_var )   {
	demChef = new_var;
}

bool Demenageur::getDemChef ( )   {
	return demChef;
}

