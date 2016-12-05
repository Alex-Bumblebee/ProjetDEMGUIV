
#ifndef CONGE_H
#define CONGE_H
#include "absence.h"

#include <string>
#include <vector>
using namespace std;



/**
  * class conge
  * 
  */

class Conge : public Absence
{
private:

  int conId;
  string conDateDemande;
  string conEtatDemande;
  string conDateReponse;
  string conLibelle;

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
  void setConDateDemande ( string new_var );

  /**
   * Get the value of conDateDemande
   * @return the value of conDateDemande
   */
  string getConDateDemande ( );

  /**
   * Set the value of conEtatDemande
   * @param new_var the new value of conEtatDemande
   */
  void setConEtatDemande ( string new_var );

  /**
   * Get the value of conEtatDemande
   * @return the value of conEtatDemande
   */
  string getConEtatDemande ( );

  /**
   * Set the value of conDateReponse
   * @param new_var the new value of conDateReponse
   */
  void setConDateReponse ( string new_var );

  /**
   * Get the value of conDateReponse
   * @return the value of conDateReponse
   */
  string getConDateReponse ( );

  /**
   * Set the value of conLibelle
   * @param new_var the new value of conLibelle
   */
  void setConLibelle ( string new_var );

  /**
   * Get the value of conLibelle
   * @return the value of conLibelle
   */
  string getConLibelle ( );

};

#endif // CONGE_H
