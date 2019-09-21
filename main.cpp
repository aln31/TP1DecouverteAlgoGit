#include <iostream>
#include <string>
using namespace std;

int main(){

	int nombre=0;
	//afficher un txt à lécran
	cout << "entrez un nombre" << endl;
	//lire le nombre tapé et l'enregistrer dans la variable nombre
	cin >> nombre;

	//affiche à l'écran le nombre saisi
	cout << "Vous avez saisi : " << nombre << endl;

	//le prog se termine normalement en renvoyant 0
	return 0;
}
