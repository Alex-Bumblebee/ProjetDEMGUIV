
#ifndef SALARIE_H
#define SALARIE_H

#include <QString>
#include <QVector>
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
  QString salNom;
  QString salPrenom;
  QString salDateNaissance;
  QString salDateEmbauche;
  QString salAdresse;
  Agence* salAgence;
  QVector<Absence*> vectAbsence;

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
  void setSalNom ( QString new_var );

  /**
   * Get the value of salNom
   * @return the value of salNom
   */
  QString getSalNom ( );

  /**
   * Set the value of salPrenom
   * @param new_var the new value of salPrenom
   */
  void setSalPrenom ( QString new_var );

  /**
   * Get the value of salPrenom
   * @return the value of salPrenom
   */
  QString getSalPrenom ( );

  /**
   * Set the value of salDateNaissance
   * @param new_var the new value of salDateNaissance
   */
  void setSalDateNaissance ( QString new_var );

  /**
   * Get the value of salDateNaissance
   * @return the value of salDateNaissance
   */
  QString getSalDateNaissance ( );

  /**
   * Set the value of salDateEmbauche
   * @param new_var the new value of salDateEmbauche
   */
  void setSalDateEmbauche ( QString new_var );

  /**
   * Get the value of salDateEmbauche
   * @return the value of salDateEmbauche
   */
  QString getSalDateEmbauche ( );

  /**
   * Set the value of salAdresse
   * @param new_var the new value of salAdresse
   */
  void setSalAdresse ( QString new_var );

  /**
   * Get the value of salAdresse
   * @return the value of salAdresse
   */
  QString getSalAdresse ( );

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
  void setVectAbsence ( QVector<Absence*> new_var );

  /**
   * Get the value of vectAbsence
   * @return the value of vectAbsence
   */
  QVector<Absence*> getVectAbsence ( );

};

#endif // SALARIE_H
