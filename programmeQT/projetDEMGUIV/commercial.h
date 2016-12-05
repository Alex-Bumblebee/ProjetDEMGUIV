
#ifndef COMMERCIAL_H
#define COMMERCIAL_H
#include "salarie.h"

#include <string>
#include <vector>
using namespace std;



/**
  * class commercial
  * 
  */

class Commercial : public Salarie
{
private:

  int comExperience;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  Commercial ( );

  /**
   * Empty Destructor
   */
  virtual ~Commercial ( );

  /**
   * Set the value of comExperience
   * @param new_var the new value of comExperience
   */
  void setComExperience ( int new_var );

  /**
   * Get the value of comExperience
   * @return the value of comExperience
   */
  int getComExperience ( );

};

#endif // COMMERCIAL_H
