#include <iostream>
#include <string>
using namespace std;

int main(){

	srand(time(NULL));
	int alea=rand()%100 + 1;
	int nombre=0;
	int essais=0;
	//afficher un txt à lécran
	cout << "Entrez un nombre entre 1 et 100" << endl;
	

		while (alea!=nombre)
			{
			//incrémente le compteur de coups
			essais++;
			//lire le nombre tapé et l'enregistrer dans la variable nombre
			cin >> nombre;
				if (alea<nombre)
					cout << "Trop grand" << endl;
				else if (alea>nombre)
					cout << "Trop petit" << endl;
			}
	cout << "Felicitation vous avez trouvé le nombre mystère (" << nombre << ") en : " << essais << " essais !" << endl;

	//le prog se termine normalement en renvoyant 0
	return 0;
}
