#ifndef FICHEDESUIVI_H
#define FICHEDESUIVI_H

#include <QString>
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
  QString fdsType;
  int fdsKilometrage;
  QString fdsDateDebut;
  QString fdsDateFin;
  QString fdsInformationsSup;
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
  void setFdsType ( QString new_var );

  /**
   * Get the value of fdsType
   * @return the value of fdsType
   */
  QString getFdsType ( );

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
  void setFdsDateDebut ( QString new_var );

  /**
   * Get the value of fdsDateDebut
   * @return the value of fdsDateDebut
   */
  QString getFdsDateDebut ( );

  /**
   * Set the value of fdsDateFin
   * @param new_var the new value of fdsDateFin
   */
  void setFdsDateFin ( QString new_var );

  /**
   * Get the value of fdsDateFin
   * @return the value of fdsDateFin
   */
  QString getFdsDateFin ( );

  /**
   * Set the value of fdsInformationsSup
   * @param new_var the new value of fdsInformationsSup
   */
  void setFdsInformationsSup ( QString new_var );

  /**
   * Get the value of fdsInformationsSup
   * @return the value of fdsInformationsSup
   */
  QString getFdsInformationsSup ( );

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
