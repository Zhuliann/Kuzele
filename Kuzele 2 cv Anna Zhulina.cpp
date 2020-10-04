#include <iostream>
#include <string>
#include <math.h>

#define PI 3.1415926535897932
#define EPS 0.000000000000001

using namespace std;

int main() {
	string jmeno, prijmeni;
	double R = 0.0, povrska;

	cout << "Zadej jmeno: ";
	cin >> jmeno;

	cout << "Zadej prijmeni: ";
	cin >> prijmeni;

	cout << "Zadej polomer podstavy (m): ";
	cin >> R;

	cout << "Zadej delku strany (m): ";
	cin >> povrska;

	if (povrska > R){
		cout << "Kuzele existje\n"; 
		
		double h = sqrt( pow(povrska,2) - pow(R,2) );
		double povrch = PI * R*(R + povrska);
		double objem = PI * R*R*h / 3;

		double uhel = 2*asin(R/povrska);
		bool tupy = uhel > PI/2;

		cout << "Povrch: " << povrch << " m*2" << endl << "objem: " << objem << " m*3" << endl; // endl - also the end of the line
		cout << "Uhel: " << uhel << " radians" << endl;

		if (tupy) {
			cout << "Uhel je tupy" << endl;
		}
		else if ((uhel - PI / 2 < EPS)&&(uhel - PI / 2 > -EPS)) {
			cout << "Uhel je ~primy" << endl;
		}
		else{
			cout << "Uhel je ostry" << endl;
		}
	}
	else {
		cout << "Kuzele neexistuje" << endl;
	}

	system("pause");

	return 0;
}
