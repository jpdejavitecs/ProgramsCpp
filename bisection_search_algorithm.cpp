//Bisection search algorith for a squareroot calculation

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int x = 25;
	float epsilon = 0.01;
	int numGuesses = 0;
	float low = 1.0;
	float high;
	float ans = (high + low) / 2.0;

	//start of the alforithm
	while (abs(pow(ans, 2) - x) >= epsilon){
		
		cout << "low = " << low << " high = " << high << " ans = " << ans << endl;
		numGuesses++;
		if (pow(ans,2) < x)
			low = ans;
		else
			high = ans;
		ans = (high + low) / 2.0;
	}

	cout << "numGuesses = " << numGuesses << endl;
	cout << ans << " is close to square root of " << x << endl;
}