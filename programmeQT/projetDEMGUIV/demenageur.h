
#ifndef DEMENAGEUR_H
#define DEMENAGEUR_H
#include "salarie.h"

#include <QString>
#include <QVector>
using namespace std;



/**
  * class demenageur
  * 
  */

class Demenageur : public Salarie
{
private:

  QString demPermis;
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
  void setDemPermis ( QString new_var );

  /**
   * Get the value of demPermis
   * @return the value of demPermis
   */
  QString getDemPermis ( );

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
