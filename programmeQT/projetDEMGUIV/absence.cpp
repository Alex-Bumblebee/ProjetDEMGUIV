#include "absence.h"

// Constructors/Destructors
//  
Absence::Absence ( ) {
	initAttributes();
}

Absence::~Absence ( ) { }


// Methods
//  
void Absence::initAttributes ( ) {
}

void Absence::setAbsId ( int new_var )   {
	absId = new_var;
}

int Absence::getAbsId ( )   {
	return absId;
}

void Absence::setAbsDateDebut ( string new_var )   {
	absDateDebut = new_var;
}

string Absence::getAbsDateDebut ( )   {
	return absDateDebut;
}

void Absence::setAbsDateFin ( string new_var )   {
	absDateFin = new_var;
}

string Absence::getAbsDateFin ( )   {
	return absDateFin;
}

void Absence::setAbsSalarie ( Salarie* new_var )   {
	absSalarie = new_var;
}

Salarie* Absence::getAbsSalarie ( )   {
	return absSalarie;
}

