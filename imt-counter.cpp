#include <iostream>
using namespace std;

int main () {
	
	float b, t, imt;
	
	cout << "Berat badan (kg)     : ";
	cin >> b;
	cout << "Tinggi badan (m)     : ";
	cin >> t;
	
	imt = b/(t*t);
	
	if (imt > 30) {
		cout << "IMT    = " << imt << "            Termasuk kegemukan";
	} else if (imt > 25) {
		cout << "IMT    = " << imt << "            Termasuk gemuk";
	} else if (imt > 18.5) {
		cout << "IMT    = " << imt << "            Termasuk normal";
	} else if (imt > 0) {
		cout << "IMT    = " << imt << "            Termasuk kurus";
	} else {
		cout << "False";
	}
		
	return 0;
}
