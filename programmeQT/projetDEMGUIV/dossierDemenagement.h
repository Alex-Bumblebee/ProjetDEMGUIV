
#ifndef DOSSIERDEMENAGEMENT_H
#define DOSSIERDEMENAGEMENT_H

#include <string>
#include <vector>
#include "demenageur.h"
#include "commercial.h"
#include "vehicule.h"
using namespace std;



/**
  * class dossierDemenagement
  * 
  */

class DossierDemenagement
{
private:

  int dosNumero;
  string dosDateOuverture;
  string dosDateDebutDem;
  string dosDateFinDem;
  float dosVolume;
  float dosNbKm;
  string dosAdresseChargement;
  string dosAdresseLivraison;
  string dosEtatDossier;
  int dosNbDemenageur;
  string dosDateCloture;
  vector<Demenageur*> vectDemenageurs;
  Demenageur* dosChefEquipe;
  Commercial* dosCommercial;
  vector<Vehicule*> vectVehicule;

  void initAttributes ( ) ;

public:

  /**
   * Empty Constructor
   */
  DossierDemenagement ( );

  /**
   * Empty Destructor
   */
  virtual ~DossierDemenagement ( );

  /**
   * Set the value of dosNumero
   * @param new_var the new value of dosNumero
   */
  void setDosNumero ( int new_var );

  /**
   * Get the value of dosNumero
   * @return the value of dosNumero
   */
  int getDosNumero ( );

  /**
   * Set the value of dosDateOuverture
   * @param new_var the new value of dosDateOuverture
   */
  void setDosDateOuverture ( string new_var );

  /**
   * Get the value of dosDateOuverture
   * @return the value of dosDateOuverture
   */
  string getDosDateOuverture ( );

  /**
   * Set the value of dosDateDebutDem
   * @param new_var the new value of dosDateDebutDem
   */
  void setDosDateDebutDem ( string new_var );

  /**
   * Get the value of dosDateDebutDem
   * @return the value of dosDateDebutDem
   */
  string getDosDateDebutDem ( );

  /**
   * Set the value of dosDateFinDem
   * @param new_var the new value of dosDateFinDem
   */
  void setDosDateFinDem ( string new_var );

  /**
   * Get the value of dosDateFinDem
   * @return the value of dosDateFinDem
   */
  string getDosDateFinDem ( );

  /**
   * Set the value of dosVolume
   * @param new_var the new value of dosVolume
   */
  void setDosVolume ( float new_var );

  /**
   * Get the value of dosVolume
   * @return the value of dosVolume
   */
  float getDosVolume ( );

  /**
   * Set the value of dosNbKm
   * @param new_var the new value of dosNbKm
   */
  void setDosNbKm ( float new_var );

  /**
   * Get the value of dosNbKm
   * @return the value of dosNbKm
   */
  float getDosNbKm ( );

  /**
   * Set the value of dosAdresseChargement
   * @param new_var the new value of dosAdresseChargement
   */
  void setDosAdresseChargement ( string new_var );

  /**
   * Get the value of dosAdresseChargement
   * @return the value of dosAdresseChargement
   */
  string getDosAdresseChargement ( );

  /**
   * Set the value of dosAdresseLivraison
   * @param new_var the new value of dosAdresseLivraison
   */
  void setDosAdresseLivraison ( string new_var );

  /**
   * Get the value of dosAdresseLivraison
   * @return the value of dosAdresseLivraison
   */
  string getDosAdresseLivraison ( );

  /**
   * Set the value of dosEtatDossier
   * @param new_var the new value of dosEtatDossier
   */
  void setDosEtatDossier ( string new_var );

  /**
   * Get the value of dosEtatDossier
   * @return the value of dosEtatDossier
   */
  string getDosEtatDossier ( );

  /**
   * Set the value of dosNbDemenageur
   * @param new_var the new value of dosNbDemenageur
   */
  void setDosNbDemenageur ( int new_var );

  /**
   * Get the value of dosNbDemenageur
   * @return the value of dosNbDemenageur
   */
  int getDosNbDemenageur ( );

  /**
   * Set the value of dosDateCloture
   * @param new_var the new value of dosDateCloture
   */
  void setDosDateCloture ( string new_var );

  /**
   * Get the value of dosDateCloture
   * @return the value of dosDateCloture
   */
  string getDosDateCloture ( );

  /**
   * Set the value of vectDemenageurs
   * @param new_var the new value of vectDemenageurs
   */
  void setVectDemenageurs ( vector<Demenageur*> new_var );

  /**
   * Get the value of vectDemenageurs
   * @return the value of vectDemenageurs
   */
  vector<Demenageur*> getVectDemenageurs ( );

  /**
   * Set the value of dosChefEquipe
   * @param new_var the new value of dosChefEquipe
   */
  void setDosChefEquipe ( Demenageur* new_var );

  /**
   * Get the value of dosChefEquipe
   * @return the value of dosChefEquipe
   */
  Demenageur* getDosChefEquipe ( );

  /**
   * Set the value of dosCommercial
   * @param new_var the new value of dosCommercial
   */
  void setDosCommercial ( Commercial* new_var );

  /**
   * Get the value of dosCommercial
   * @return the value of dosCommercial
   */
  Commercial* getDosCommercial ( );

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

};

#endif // DOSSIERDEMENAGEMENT_H
