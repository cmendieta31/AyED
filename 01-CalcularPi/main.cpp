#include <iostream>
#include <cmath>

using namespace std;

double odtenerPi() {
	double pi = 0;
	int s = 1; int n = 1; int TN = 1e6; //tope de numeros
	
	for (int i = 0; i <TN; i++) {
		pi += s * (1.0 / n); s *= -1; n += 2;
		
		if (static_cast<int>(pi * 1e6) == 3141592)
		break;
	}
	
	return pi * 4; //multiplico pi*4 para hacercarme al resultado
}

int main() {
	double pi = odtenerPi();
	cout.precision(7); 
	cout << "resultado: " << pi << endl;
	
	return 0;
}
