#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	// Poll
	int anneeNaissance, moisNaissance, jourNaissance, heureNaissance, minuteNaissance, secondeNaissance;
	cout << "Entrez votre annee de naissance :";
	cin >> anneeNaissance;
	cout << "Entrez votre mois de naissance 1-12: ";
	cin >> moisNaissance;
	cout << "Entrez le jour de votre naissance 1-31: ";
	cin >> jourNaissance;
	cout << "Entrez votre heure de naissance 0-23 (dans le doute, mettre 0): ";
	cin >> heureNaissance;
	cout << "Entrez votre minute de naissance 0-59 (dans le doute, mettre 0): ";
	cin >> minuteNaissance;
	cout << "Entrez votre seconde de naissance 0-59 (dans le doute, mettre 0): ";
	cin >> secondeNaissance;
	
	// Definition variables
	time_t maintenant;
	struct tm naissance;
	double ageSecondes;

	time(&maintenant);

	naissance = *localtime(&maintenant);
	naissance.tm_year = anneeNaissance-1900;
	naissance.tm_mon = moisNaissance-1;
	naissance.tm_mday = jourNaissance;
	naissance.tm_hour = heureNaissance;
	naissance.tm_min = minuteNaissance;
	naissance.tm_sec = secondeNaissance;

	
	ageSecondes = difftime(maintenant, mktime(&naissance));

	// Calculs
	// Minutes
	double ageMinutes = ageSecondes/60;

	// Heures
	double ageHeures = ageSecondes/3600;

	// Jours

	double ageJours = ageSecondes/(3600*24);

	// Semaines
	double ageSemaines = ageJours / 7;

	// Mois
	double ageMois = ageJours / 30.41666; 

	// Années
	double ageAnne = ageJours / 365;

	// Détail avec asctime
	int annee = (int)ageAnne;
	int mois = (int)ageMois-12*annee;
	int jours = (int)ageJours-365*annee-30.416666*mois;
	int heures = (int)ageHeures-365*24*annee-30.416666*24*mois-24*jours;
	int minutes = (int)ageMinutes- 365 * 24 * 60 *annee - 30.416666* 24 * 60 * mois - 24 * 60 * jours - 60 * heures;
	int secondes = (int)ageSecondes - 365 * 24 * 60 * 60 * annee - 30.416666* 24 * 60 * 60 * mois - 24 * 60 * 60 * jours - 60 * 60 * heures - 60 * minutes;

	// affichage
	cout << "Votre age en secondes:  " << ageSecondes<< endl;
	cout << "Votre age en minutes:  " << ageMinutes << endl;
	cout << "Votre age en heures:  " << ageHeures << endl;
	cout << "Votre age en jours:  " << ageJours << endl;
	cout << "Votre age en semaines:  " << ageSemaines << endl;
	cout << "Votre age en mois:  " << ageMois << endl;
	cout << "Vous avez donc " << annee << " ans,  " << mois << " mois, " << jours << " jours, " << minutes << " minutes et " << secondes << " secondes." << endl;
}