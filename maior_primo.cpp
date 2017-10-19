#include <iostream>
#include <stdio.h>

using namespace std;

int verifica_primo(int numero){

	int teste = 1;
	int cont = 0;

	if (numero < 2)
		return 1;
	else{
		while (teste <= numero){
			if (numero % teste == 0){
				cont++;
				teste++;
			}
			else
				teste++;
		}
		if (cont > 2)
			return 1;
		else
			return 0;
	}
}

int main (){
	int numero;
	int i = 2;
	int contador = 0;

	cout << "Até que número verificar a primalidade: ";
	cin >> numero;

	for (i; i <= numero; i++){
		if (verifica_primo(i) == 0){
			contador = i;
		}
	}

	printf("Maior primo da sequencia: %d\n", contador); 

	return 0;
}