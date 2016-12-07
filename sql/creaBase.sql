DROP DATABASE IF EXISTS Demenagement;
CREATE DATABASE Demenagement;
GRANT ALL PRIVILEGES ON Demenagement.* TO userDemenagement@'%' IDENTIFIED BY 'Zmcub03';
USE Demenagement;

DROP TABLE IF EXISTS Dependre;
DROP TABLE IF EXISTS Justifier;
DROP TABLE IF EXISTS Concerner;
DROP TABLE IF EXISTS Travailler;
DROP TABLE IF EXISTS Gerer;
DROP TABLE IF EXISTS Utiliser;
DROP TABLE IF EXISTS Participer;
DROP TABLE IF EXISTS etreChefEquipe;
DROP TABLE IF EXISTS Arret;
DROP TABLE IF EXISTS Conge;
DROP TABLE IF EXISTS Agence;
DROP TABLE IF EXISTS Permis;
DROP TABLE IF EXISTS Vehicule;
DROP TABLE IF EXISTS TypeVehicule;
DROP TABLE IF EXISTS Salarie;
DROP TABLE IF EXISTS Immobilisation;
DROP TABLE IF EXISTS ControleTechnique;
DROP TABLE IF EXISTS MotifConge;
DROP TABLE IF EXISTS DossierDemenagement;
DROP TABLE IF EXISTS Garage;
DROP TABLE IF EXISTS MotifArret;

CREATE TABLE Agence (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	nom VARCHAR(30),
	adresse VARCHAR(50),
	telephone VARCHAR(20),
	fax VARCHAR(20),
	mail varchar(30))
ENGINE = InnoDB DEFAULT CHARSET utf8;

CREATE TABLE Permis (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	libelle VARCHAR(2))
ENGINE = InnoDB DEFAULT CHARSET utf8;

CREATE TABLE TypeVehicule (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	ptac VARCHAR(20),
	frequenceEntretien VARCHAR(30))
ENGINE = InnoDB DEFAULT CHARSET utf8;

CREATE TABLE Vehicule (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	immat VARCHAR(30),
	modele VARCHAR(30),
	dateMiseCirculation VARCHAR(30),
	volumeUtile FLOAT,
	hayon BOOL,
	couchette BOOL,
	nbPlaceCabine INT,
	etat VARCHAR(30),
	idAgence INT NOT NULL REFERENCES Agence(id),
	idPermis INT NOT NULL REFERENCES Permis(id),
	idType INT NOT NULL REFERENCES TypeVehicule(id))
ENGINE = InnoDB DEFAULT CHARSET utf8;

CREATE TABLE Salarie (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	nom VARCHAR(30),
	prenom VARCHAR(30),
	dateNaissance VARCHAR(30),
	dateEmbauche VARCHAR(30),
	adresse VARCHAR(30),
	typeSalarie VARCHAR(1),
	idAgence INT NOT NULL REFERENCES Agence(id),
	idPermis INT NOT NULL REFERENCES Permis(id),
	chef BOOL,
	experience VARCHAR(30),
	etat VARCHAR(30))
ENGINE = InnoDB DEFAULT CHARSET utf8;

CREATE TABLE Immobilisation (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	idVehicule INT NOT NULL REFERENCES Vehicule(id),
	typeImmo VARCHAR(30),
	kilometrage INT,
	dateDebut VARCHAR(30),
	dateFin VARCHAR(30),
	info VARCHAR(30),
	idGarage INT NOT NULL REFERENCES Garage(id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE ControleTechnique (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	idVehicule INT NOT NULL REFERENCES Vehicule(id),
	resultat VARCHAR(1),
	idGarage INT NOT NULL REFERENCES Garage(id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE MotifConge (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	libelle VARCHAR(30))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Conge (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	idSalarie INT NOT NULL REFERENCES Salarie(id),
	idMotif INT NOT NULL REFERENCES MotifConge(id),
	dateDebut VARCHAR(30),
	dateFin VARCHAR(30),
	dateDemande VARCHAR(30),
	etatDemande VARCHAR(3),
	dateReponse VARCHAR(30))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE DossierDemenagement (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	dateOuverture VARCHAR(30),
	dateDebutDem VARCHAR(30),
	dateFinDem VARCHAR(30),
	volume INT,
	nombreKm INT,
	adresseChargement VARCHAR(30),
	adresseLivraison VARCHAR(30),
	etatDossier VARCHAR(30),
	nbDemenageur INT,
	dateCloture VARCHAR(30),
	commercial INT NOT NULL REFERENCES Salarie(id),
	chefEquipe INT NOT NULL REFERENCES Salarie(id),
	idAgence INT NOT NULL REFERENCES Agence(id),
	CHECK (chefEquipe IN (SELECT id FROM Salarie WHERE typeSalarie = 'D' AND chef = TRUE)))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Garage (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	nom VARCHAR(30),
	adresse VARCHAR(30),
	telephone VARCHAR(30))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE MotifArret (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	libelle VARCHAR(30))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Arret (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	idSalarie INT NOT NULL REFERENCES Salarie(id),
	idMotif INT NOT NULL REFERENCES MotifArret(id),
	dateDebut VARCHAR(30),
	dateFin VARCHAR(30),
	certificatMedical BOOL)
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Justifier (
	con_id INT NOT NULL REFERENCES Conge(id),
	mot_id INT NOT NULL REFERENCES MotifConge(id),
	PRIMARY KEY (con_id, mot_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;


CREATE TABLE Concerner (
	con_id INT NOT NULL REFERENCES Conge(id),
	sal_id INT NOT NULL REFERENCES Salarie(id),
	PRIMARY KEY (con_id, sal_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Travailler (
	sal_id INT NOT NULL REFERENCES Salarie(id),
	age_id INT NOT NULL REFERENCES Agence(id),
	PRIMARY KEY (sal_id, age_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Dependre (
	age_id INT NOT NULL REFERENCES Agence(id),
	veh_id INT NOT NULL REFERENCES Vehicule(id),
	PRIMARY KEY (age_id, veh_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Gerer (
	age_id INT NOT NULL REFERENCES Agence(id),
	dos_id INT NOT NULL REFERENCES DossierDemenagement(id),
	PRIMARY KEY(age_id, dos_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Utiliser (
	veh_id INT NOT NULL REFERENCES Vehicule(id),
	dos_id INT NOT NULL REFERENCES DossierDemenagement(id),
	PRIMARY KEY(veh_id, dos_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE Participer (
	sal_id INT NOT NULL REFERENCES Salarie(id),
	dos_id INT NOT NULL REFERENCES DossierDemenagement(id),
	PRIMARY KEY(sal_id, dos_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

CREATE TABLE etreChefEquipe (
	sal_id INT NOT NULL REFERENCES Salarie(id),
	dos_id INT NOT NULL REFERENCES DossierDemenagement(id),
	PRIMARY KEY(sal_id, dos_id))
ENGINE = InnoDB DEFAULT CHARSET = utf8;

DROP VIEW IF EXISTS Chef;

CREATE VIEW Chef AS 
SELECT * 
FROM DossierDemenagement 
WHERE chefEquipe
IN (
	SELECT id 
	FROM Salarie 
	WHERE typeSalarie = 'D' AND chef = TRUE
);

