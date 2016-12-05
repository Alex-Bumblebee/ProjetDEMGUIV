#include "maladie.h"

// Constructors/Destructors
//  
Maladie::Maladie ( ) {
	initAttributes();
}

Maladie::~Maladie ( ) { }


// Methods
//  
void Maladie::initAttributes ( ) {
}

void Maladie::setMalId ( int new_var )   {
	malId = new_var;
}

int Maladie::getMalId ( )   {
	return malId;
}

void Maladie::setMalLibelle ( string new_var )   {
	malLibelle = new_var;
}

string Maladie::getMalLibelle ( )   {
	return malLibelle;
}

void Maladie::setMalCertificatFourni ( bool new_var )   {
	malCertificatFourni = new_var;
}

bool Maladie::getMalCertificatFourni ( )   {
	return malCertificatFourni;
}

