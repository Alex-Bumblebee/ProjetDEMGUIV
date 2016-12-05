
#ifndef AGENCE_H
#define AGENCE_H

#include <string>
#include <vector>
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
  string ageNom;
  string ageAdresse;
  string ageTelephone;
  string ageFax;
  string ageMail;
  vector<Vehicule*> vectVehicule;
  vector<Salarie*> vectSalarie;

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
  void setAgeNom ( string new_var );

  /**
   * Get the value of ageNom
   * @return the value of ageNom
   */
  string getAgeNom ( );

  /**
   * Set the value of ageAdresse
   * @param new_var the new value of ageAdresse
   */
  void setAgeAdresse ( string new_var );

  /**
   * Get the value of ageAdresse
   * @return the value of ageAdresse
   */
  string getAgeAdresse ( );

  /**
   * Set the value of ageTelephone
   * @param new_var the new value of ageTelephone
   */
  void setAgeTelephone ( string new_var );

  /**
   * Get the value of ageTelephone
   * @return the value of ageTelephone
   */
  string getAgeTelephone ( );

  /**
   * Set the value of ageFax
   * @param new_var the new value of ageFax
   */
  void setAgeFax ( string new_var );

  /**
   * Get the value of ageFax
   * @return the value of ageFax
   */
  string getAgeFax ( );

  /**
   * Set the value of ageMail
   * @param new_var the new value of ageMail
   */
  void setAgeMail ( string new_var );

  /**
   * Get the value of ageMail
   * @return the value of ageMail
   */
  string getAgeMail ( );

  /**
   * Set the value of vectVehicule
   * @param new_var the new value of vectVehicule
   */
  void setVectVehicule ( vector<Vehicule*> new_var );

  /**
   * Get the value of vectVehicule
   * @return the value of vectVehicule
   */
  vector<Vehicule*> getVectVehicule ( );

  /**
   * Set the value of vectSalarie
   * @param new_var the new value of vectSalarie
   */
  void setVectSalarie ( vector<Salarie*> new_var );

  /**
   * Get the value of vectSalarie
   * @return the value of vectSalarie
   */
  vector<Salarie*> getVectSalarie ( );

};

#endif // AGENCE_H
