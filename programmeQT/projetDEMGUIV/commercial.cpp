#include "commercial.h"

// Constructors/Destructors
//  
Commercial::Commercial ( ) {
	initAttributes();
}

Commercial::~Commercial ( ) { }


// Methods
//  
void Commercial::initAttributes ( ) {
}


void Commercial::setComExperience ( int new_var )   {
	comExperience = new_var;
}

int Commercial::getComExperience ( )   {
	return comExperience;
}

