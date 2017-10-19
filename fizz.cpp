/*
* @Author: João Paulo github.com/jpdejavitecs
* @Date:   2017-10-18 11:44:13
* @Last Modified by:   João Paulo
* @Last Modified time: 2017-10-18 13:35:39
*/

#include <iostream>

using namespace std;

int main (){
	int number;
	cout << "Type a integer number: ";
	cin >> number;

	if (number % 3 == 0)
		cout << "Fizz" << endl;
	else
		cout << number << endl;
}