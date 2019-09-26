#include <iostream>
#include <string>
using namespace std;

int main(){

	int continu=1;

	while (continu==1)
	{
	int diff=0;
	int alea=0;
	int nombre=0;
	int essais=0;

		//Choix de la difficultée

		cout << "Choisir 1 ou 2 ou 3" << endl;
		cin >> diff;
			if (diff==1)
			{
			srand(time(NULL));
			alea=rand()%100 + 1;
			diff=100;
			}	
			else if (diff==2)
			{	
			srand(time(NULL));
			alea=rand()%1000 + 1;
			diff=1000;
			}	
			else
			{	
			srand(time(NULL));
			alea=rand()%10000 + 1;
			diff=10000;
			}	


			//afficher un txt à lécran
			cout << "Entrez un nombre entre 1 et " << diff << " :" << endl;
			cout << alea << endl;
			

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
	cout << "Voulez-vous rejouer ? Tapez 0 pour arreter ou 1 pour rejouer" << endl;
	cin >> continu;
	}	
	

	//le prog se termine normalement en renvoyant 0
	return 0;
}
