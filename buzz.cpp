#include <iostream>

using namespace std;

int main (){
	int num;

	cout << "Digite um numero: " << endl;
	cin >> num;

	if (num % 5 == 0)
		cout << "Buzz" << endl;
	else
		cout << num << endl;
}