#include <iostream>

using namespace std;

int main (){
	int numero;
	int teste = 1;
	int cont = 0;

	cout << "Digite um numero inteiro: " << endl;
	cin >> numero;

	if (numero < 2)
		cout << numero << " não é primo." << endl;
	else{
		while (teste <= numero){
			if (numero % teste == 0){
				cont += 1;
				teste += 1;
			}
			else
				teste += 1;
		}
		if (cont > 2)
			cout << numero << " não é primo.";
		else
			cout << numero << " é primo.";
	}

}