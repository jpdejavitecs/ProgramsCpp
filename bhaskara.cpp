//Calculando as raízes de uma função quadrática

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int a, b, c, delta = 0;
	float r;
	float x1, x2;

	cout << "Digite o valor de A: " << endl;
	cin >> a;
	cout << "  " << a << endl;
	cout << "Digite o valor de B: " << endl;
	cin >> b;
	cout << "  " << b << endl;
	cout << "Digite o valor de C: " << endl;
	cin >> c;
	cout << "  " << c << endl;

	delta = pow(b,2)-(4*a*c);

	cout << delta << endl;

	if (delta < 0)
		cout << "Esta equação não possui raízes reais" << endl;
	else{
		if (delta == 0){
			r = - b / (2 * a);
			cout << "A raiz desta equação é " << r << endl;
		}
		else{
			x1 = sqrt(-b + ((double)delta)) / (2 * a);
			x2 = sqrt(-b - ((double)delta)) / (2 * a);
			if (x1 > x2)
				cout << "As raízes da equação são: " << x1 << " e " << x2 << endl;
			else
				cout << "As raízes da equação são: " << x2 << " e " << x1 << endl;
		}
	}
}