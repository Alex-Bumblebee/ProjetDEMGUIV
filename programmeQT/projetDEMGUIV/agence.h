
#ifndef AGENCE_H
#define AGENCE_H

#include <QString>
#include <QVector>
#include "vehicule.h"
#include "salarie.h"
using namespace std;

class Salarie;
class Vehicule;




/**
  * class agence
  * 
  */

class Agence
{

private:

  int ageId;
  QString ageNom;
  QString ageAdresse;
  QString ageTelephone;
  QString ageFax;
  QString ageMail;
  QVector<Vehicule*> vectVehicule;
  QVector<Salarie*> vectSalarie;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  Agence ( );

  /**
   * Empty Destructor
   */
  virtual ~Agence ( );

  /**
   * Set the value of ageId
   * @param new_var the new value of ageId
   */
  void setAgeId ( int new_var );

  /**
   * Get the value of ageId
   * @return the value of ageId
   */
  int getAgeId ( );

  /**
   * Set the value of ageNom
   * @param new_var the new value of ageNom
   */
  void setAgeNom ( QString new_var );

  /**
   * Get the value of ageNom
   * @return the value of ageNom
   */
  QString getAgeNom ( );

  /**
   * Set the value of ageAdresse
   * @param new_var the new value of ageAdresse
   */
  void setAgeAdresse ( QString new_var );

  /**
   * Get the value of ageAdresse
   * @return the value of ageAdresse
   */
  QString getAgeAdresse ( );

  /**
   * Set the value of ageTelephone
   * @param new_var the new value of ageTelephone
   */
  void setAgeTelephone ( QString new_var );

  /**
   * Get the value of ageTelephone
   * @return the value of ageTelephone
   */
  QString getAgeTelephone ( );

  /**
   * Set the value of ageFax
   * @param new_var the new value of ageFax
   */
  void setAgeFax ( QString new_var );

  /**
   * Get the value of ageFax
   * @return the value of ageFax
   */
  QString getAgeFax ( );

  /**
   * Set the value of ageMail
   * @param new_var the new value of ageMail
   */
  void setAgeMail ( QString new_var );

  /**
   * Get the value of ageMail
   * @return the value of ageMail
   */
  QString getAgeMail ( );

  /**
   * Set the value of vectVehicule
   * @param new_var the new value of vectVehicule
   */
  void setVectVehicule ( QVector<Vehicule*> new_var );

  /**
   * Get the value of vectVehicule
   * @return the value of vectVehicule
   */
  QVector<Vehicule*> getVectVehicule ( );

  /**
   * Set the value of vectSalarie
   * @param new_var the new value of vectSalarie
   */
  void setVectSalarie ( QVector<Salarie*> new_var );

  /**
   * Get the value of vectSalarie
   * @return the value of vectSalarie
   */
  QVector<Salarie*> getVectSalarie ( );

};

#endif // AGENCE_H
