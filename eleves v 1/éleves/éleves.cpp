#include <iostream>
using namespace std;
#include <limits>

const int MAXTAILLECHAINE = 16;
const int NBELEVES = 5;

struct Eleve
{
	char nom[MAXTAILLECHAINE];
	char prenom[MAXTAILLECHAINE];
	float moyenne;
};

void main(void)
{
	Eleve tab[NBELEVES];

	for (int i = 0; i < NBELEVES; i++)
	{
		cout << "Entrez le nom : ";
		cin >> ws;
		cin.get(tab[i].nom, MAXTAILLECHAINE);

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Entrez la moyenne : ";
		cin >> tab[i].moyenne;

		while (tab[i].moyenne < 0 || tab[i].moyenne > 20) {
			cout << "Valeur incorrecte ! "
				 << "Veuillez la saisir a nouveau : ";
			cin >> tab[i].moyenne;
		}
		cout << "L'eleve " << tab[i].nom << " "
			 << tab[i].prenom << " a " << tab[i].moyenne
			 << " de moyenne." << endl;
		system("pause");
	}

	cout << "Fin de la saisie des " << NBELEVES
		 << " eleves." << endl;

	system("pause");
}