
#ifndef DEMENAGEUR_H
#define DEMENAGEUR_H
#include "salarie.h"

#include <string>
#include <vector>
using namespace std;



/**
  * class demenageur
  * 
  */

class Demenageur : public Salarie
{
private:

  string demPermis;
  bool demChef;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  Demenageur ( );

  /**
   * Empty Destructor
   */
  virtual ~Demenageur ( );

  /**
   * Set the value of demPermis
   * @param new_var the new value of demPermis
   */
  void setDemPermis ( string new_var );

  /**
   * Get the value of demPermis
   * @return the value of demPermis
   */
  string getDemPermis ( );

  /**
   * Set the value of demChef
   * @param new_var the new value of demChef
   */
  void setDemChef ( bool new_var );

  /**
   * Get the value of demChef
   * @return the value of demChef
   */
  bool getDemChef ( );

};

#endif // DEMENAGEUR_H
