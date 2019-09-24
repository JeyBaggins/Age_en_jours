#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int anneeNaissance, moisNaissance, jourNaissance;
	cout << "Entrez votre annee de naissance :";
	cin >> anneeNaissance;
	cout << "Entrez votre mois de naissance: ";
	cin >> moisNaissance;
	cout << "Entrez le jour du mois de votre naissance: ";
	cin >> jourNaissance;
	
	int ageEnJours;
	ageEnJours = 365 * (2016 - anneeNaissance);
	//if (anneeNaissance % 4 == 0)
		//tenir compte des années bissextiles

	// Mois
	
	if (moisNaissance = 2)
		ageEnJours += 31;
	else if (moisNaissance = 3)
		ageEnJours += 59;
	else if (moisNaissance = 4)
		ageEnJours += 90;
	else if (moisNaissance = 5)
		ageEnJours += 120;
	else if (moisNaissance = 6)
		ageEnJours += 151;
	else if (moisNaissance = 7)
		ageEnJours += 181;
	else if (moisNaissance = 8)
		ageEnJours += 212;
	else if (moisNaissance = 9)
		ageEnJours += 242;
	else if (moisNaissance = 10)
		ageEnJours += 273;
	else if (moisNaissance = 11)
		ageEnJours += 303;
	else if (moisNaissance = 12)
		ageEnJours += 334;

	//Jours
	ageEnJours += jourNaissance;

	// affichage
	cout << "Votre age en jours:  " << ageEnJours << endl;
}