
#ifndef MALADIE_H
#define MALADIE_H
#include "absence.h"

#include <QString>
#include <QVector>
using namespace std;




/**
  * class maladie
  * 
  */

class Maladie : public Absence
{
private:

  int malId;
  QString malLibelle;
  bool malCertificatFourni;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  Maladie ( );

  /**
   * Empty Destructor
   */
  virtual ~Maladie ( );

  /**
   * Set the value of malId
   * @param new_var the new value of malId
   */
  void setMalId ( int new_var );

  /**
   * Get the value of malId
   * @return the value of malId
   */
  int getMalId ( );

  /**
   * Set the value of malLibelle
   * @param new_var the new value of malLibelle
   */
  void setMalLibelle ( QString new_var );

  /**
   * Get the value of malLibelle
   * @return the value of malLibelle
   */
  QString getMalLibelle ( );

  /**
   * Set the value of malCertificatFourni
   * @param new_var the new value of malCertificatFourni
   */
  void setMalCertificatFourni ( bool new_var );

  /**
   * Get the value of malCertificatFourni
   * @return the value of malCertificatFourni
   */
  bool getMalCertificatFourni ( );

};

#endif // MALADIE_H
