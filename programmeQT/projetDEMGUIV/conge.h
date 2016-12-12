
#ifndef CONGE_H
#define CONGE_H
#include "absence.h"

#include <QString>
#include <QVector>
using namespace std;



/**
  * class conge
  * 
  */

class Conge : public Absence
{
private:

  int conId;
  QString conDateDemande;
  QString conEtatDemande;
  QString conDateReponse;
  QString conLibelle;

  void initAttributes ( ) ;

public:


  /**
   * Empty Constructor
   */
  Conge ( );

  /**
   * Empty Destructor
   */
  virtual ~Conge ( );

  /**
   * Set the value of conId
   * @param new_var the new value of conId
   */
  void setConId ( int new_var );

  /**
   * Get the value of conId
   * @return the value of conId
   */
  int getConId ( );

  /**
   * Set the value of conDateDemande
   * @param new_var the new value of conDateDemande
   */
  void setConDateDemande ( QString new_var );

  /**
   * Get the value of conDateDemande
   * @return the value of conDateDemande
   */
  QString getConDateDemande ( );

  /**
   * Set the value of conEtatDemande
   * @param new_var the new value of conEtatDemande
   */
  void setConEtatDemande ( QString new_var );

  /**
   * Get the value of conEtatDemande
   * @return the value of conEtatDemande
   */
  QString getConEtatDemande ( );

  /**
   * Set the value of conDateReponse
   * @param new_var the new value of conDateReponse
   */
  void setConDateReponse ( QString new_var );

  /**
   * Get the value of conDateReponse
   * @return the value of conDateReponse
   */
  QString getConDateReponse ( );

  /**
   * Set the value of conLibelle
   * @param new_var the new value of conLibelle
   */
  void setConLibelle ( QString new_var );

  /**
   * Get the value of conLibelle
   * @return the value of conLibelle
   */
  QString getConLibelle ( );

};

#endif // CONGE_H
