# Exercice : Sauvegarde de données dans un fichier CSV en C
## Objectif

L'objectif de cet exercice est d'apprendre à écrire des données dans un fichier texte en langage C. Vous allez manipuler une structure contenant des mesures et enregistrer ces données sous forme d'un fichier CSV.

## Instructions
1. **Définir une structure**  
   Créez une structure `Measurement` contenant les champs suivants :
   - `time` (int) : l'instant de la mesure en secondes
   - `current` (double) : l'intensité du courant en ampères
   - `voltage` (double) : la tension en volts
2. **Générer un tableau de données**  
   - Déclarez un tableau de 10 `Measurement` contenant des valeurs arbitraires.
3. **Créer une fonction `saveMeasurements`**  
   - Cette fonction doit prendre en paramètres :
     - le nom du fichier (chaîne de caractères)
     - un tableau de mesures
     - le nombre de mesures  
   - Elle doit écrire les données dans un fichier CSV en respectant le format suivant :
     ```
     time,current,voltage
     1,0.5,220.0
     2,0.6,219.5
     ...
     ```
   - Vérifiez si le fichier s'ouvre correctement avant d'écrire dedans.
4. **Créer une fonction `appendMeasurement`**  
   - Cette fonction doit prendre en paramètres :
     - le nom du fichier (chaîne de caractères)
     - une structure `Measurement` à ajouter  
   - Elle doit ouvrir le fichier en mode ajout et écrire une nouvelle ligne contenant la nouvelle mesure.
5. **Écrire une fonction `main`**  
   - Dans `main`, utilisez `saveMeasurements` pour créer un fichier CSV avec les 10 mesures initiales.  
   - Ensuite, ajoutez une nouvelle mesure avec `appendMeasurement`.  
   - Affichez un message pour confirmer que l'écriture a réussi.
## Contraintes
- Utiliser `fprintf` pour écrire dans le fichier.
- Vérifier que l'ouverture du fichier a réussi avant d'écrire.
- Fermer systématiquement le fichier après l'écriture.
## Exemple de sortie attendue (contenu du fichier CSV) :
```
time,current,voltage
1,0.5,220.0
2,0.6,219.5
3,0.55,221.0
...
11,0.65,218.9
```