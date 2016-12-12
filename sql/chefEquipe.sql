SELECT nom, prenom 
FROM Salarie 
INNER JOIN etreChefEquipe ON Salarie.id = etreChefEquipe.sal_id 
INNER JOIN DossierDemenagement ON etreChefEquipe.dos_id = DossierDemenagement.id
WHERE DossierDemenagement.chefEquipe = 1;

