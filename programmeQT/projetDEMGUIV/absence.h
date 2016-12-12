
#ifndef ABSENCE_H
#define ABSENCE_H

#include <QString>
#include <QVector>
#include "salarie.h"
using namespace std;
class Salarie;

/**
  * class absence
  * 
  */

class Absence
{
private:

  int absId;
  QString absDateDebut;
  QString absDateFin;
  Salarie* absSalarie;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  Absence ( );

  /**
   * Empty Destructor
   */
  virtual ~Absence ( );

  /**
   * Set the value of absId
   * @param new_var the new value of absId
   */
  void setAbsId ( int new_var );

  /**
   * Get the value of absId
   * @return the value of absId
   */
  int getAbsId ( );

  /**
   * Set the value of absDateDebut
   * @param new_var the new value of absDateDebut
   */
  void setAbsDateDebut ( QString new_var );

  /**
   * Get the value of absDateDebut
   * @return the value of absDateDebut
   */
  QString getAbsDateDebut ( );

  /**
   * Set the value of absDateFin
   * @param new_var the new value of absDateFin
   */
  void setAbsDateFin ( QString new_var );

  /**
   * Get the value of absDateFin
   * @return the value of absDateFin
   */
  QString getAbsDateFin ( );

  /**
   * Set the value of absSalarie
   * @param new_var the new value of absSalarie
   */
  void setAbsSalarie ( Salarie* new_var );

  /**
   * Get the value of absSalarie
   * @return the value of absSalarie
   */
  Salarie* getAbsSalarie ( );

};

#endif // ABSENCE_H
