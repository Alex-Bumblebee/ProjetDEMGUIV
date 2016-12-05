
#ifndef SALARIE_H
#define SALARIE_H

#include <string>
#include <vector>
#include "agence.h"
#include "absence.h"
using namespace std;
class Absence;
class Agence;


/**
  * class salarie
  * 
  */

class Salarie
{
private:

  int salId;
  string salNom;
  string salPrenom;
  string salDateNaissance;
  string salDateEmbauche;
  string salAdresse;
  Agence* salAgence;
  vector<Absence*> vectAbsence;

  void initAttributes ( ) ;

public:

   /**
   * Empty Constructor
   */
  Salarie ( );

  /**
   * Empty Destructor
   */
  virtual ~Salarie ( );

  /**
   * Set the value of salId
   * @param new_var the new value of salId
   */
  void setSalId ( int new_var );

  /**
   * Get the value of salId
   * @return the value of salId
   */
  int getSalId ( );

  /**
   * Set the value of salNom
   * @param new_var the new value of salNom
   */
  void setSalNom ( string new_var );

  /**
   * Get the value of salNom
   * @return the value of salNom
   */
  string getSalNom ( );

  /**
   * Set the value of salPrenom
   * @param new_var the new value of salPrenom
   */
  void setSalPrenom ( string new_var );

  /**
   * Get the value of salPrenom
   * @return the value of salPrenom
   */
  string getSalPrenom ( );

  /**
   * Set the value of salDateNaissance
   * @param new_var the new value of salDateNaissance
   */
  void setSalDateNaissance ( string new_var );

  /**
   * Get the value of salDateNaissance
   * @return the value of salDateNaissance
   */
  string getSalDateNaissance ( );

  /**
   * Set the value of salDateEmbauche
   * @param new_var the new value of salDateEmbauche
   */
  void setSalDateEmbauche ( string new_var );

  /**
   * Get the value of salDateEmbauche
   * @return the value of salDateEmbauche
   */
  string getSalDateEmbauche ( );

  /**
   * Set the value of salAdresse
   * @param new_var the new value of salAdresse
   */
  void setSalAdresse ( string new_var );

  /**
   * Get the value of salAdresse
   * @return the value of salAdresse
   */
  string getSalAdresse ( );

  /**
   * Set the value of salAgence
   * @param new_var the new value of salAgence
   */
  void setSalAgence ( Agence* new_var );

  /**
   * Get the value of salAgence
   * @return the value of salAgence
   */
  Agence* getSalAgence ( );

  /**
   * Set the value of vectAbsence
   * @param new_var the new value of vectAbsence
   */
  void setVectAbsence ( vector<Absence*> new_var );

  /**
   * Get the value of vectAbsence
   * @return the value of vectAbsence
   */
  vector<Absence*> getVectAbsence ( );

};

#endif // SALARIE_H
