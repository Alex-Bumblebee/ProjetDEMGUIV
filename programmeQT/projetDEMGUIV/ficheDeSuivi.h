#ifndef FICHEDESUIVI_H
#define FICHEDESUIVI_H

#include <string>
#include "vehicule.h"
class Vehicule;
using namespace std;

/**
  * class ficheDeSuivi
  * 
  */

class FicheDeSuivi
{
private:

  int fdsId;
  string fdsType;
  int fdsKilometrage;
  string fdsDateDebut;
  string fdsDateFin;
  string fdsInformationsSup;
  Vehicule* fdsVehicule;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  FicheDeSuivi ( );

  /**
   * Empty Destructor
   */
  virtual ~FicheDeSuivi ( );

  /**
   * Set the value of fdsId
   * @param new_var the new value of fdsId
   */
  void setFdsId ( int new_var );

  /**
   * Get the value of fdsId
   * @return the value of fdsId
   */
  int getFdsId ( );

  /**
   * Set the value of fdsType
   * @param new_var the new value of fdsType
   */
  void setFdsType ( string new_var );

  /**
   * Get the value of fdsType
   * @return the value of fdsType
   */
  string getFdsType ( );

  /**
   * Set the value of fdsKilometrage
   * @param new_var the new value of fdsKilometrage
   */
  void setFdsKilometrage ( int new_var );

  /**
   * Get the value of fdsKilometrage
   * @return the value of fdsKilometrage
   */
  int getFdsKilometrage ( );

  /**
   * Set the value of fdsDateDebut
   * @param new_var the new value of fdsDateDebut
   */
  void setFdsDateDebut ( string new_var );

  /**
   * Get the value of fdsDateDebut
   * @return the value of fdsDateDebut
   */
  string getFdsDateDebut ( );

  /**
   * Set the value of fdsDateFin
   * @param new_var the new value of fdsDateFin
   */
  void setFdsDateFin ( string new_var );

  /**
   * Get the value of fdsDateFin
   * @return the value of fdsDateFin
   */
  string getFdsDateFin ( );

  /**
   * Set the value of fdsInformationsSup
   * @param new_var the new value of fdsInformationsSup
   */
  void setFdsInformationsSup ( string new_var );

  /**
   * Get the value of fdsInformationsSup
   * @return the value of fdsInformationsSup
   */
  string getFdsInformationsSup ( );

  /**
   * Set the value of fdsVehicule
   * @param new_var the new value of fdsVehicule
   */
  void setFdsVehicule ( Vehicule* new_var );

  /**
   * Get the value of fdsVehicule
   * @return the value of fdsVehicule
   */
  Vehicule* getFdsVehicule ( );

};

#endif // FICHEDESUIVI_H
