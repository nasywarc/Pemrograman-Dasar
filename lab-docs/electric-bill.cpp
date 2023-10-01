#include <iostream>
#include <string>
using namespace std;

int main () {
	
	string namaPelanggan;
	int daya, dayaDigunakan, tarif;
	
	getline(cin, namaPelanggan);
	cin >> daya;
	cin >> dayaDigunakan;
	
	switch (namaPelanggan[0]) {
		case 'R' :
			namaPelanggan.erase(0,1);
			namaPelanggan.erase(0,1);
			
			if (daya >= 6600) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "R-3/TR" << endl;
				
					tarif = dayaDigunakan * 1699;
					cout << tarif << endl;
				
				} else if (daya <= 5500) {
					if (daya >= 3500) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "R-2/TR" << endl;
				
					tarif = dayaDigunakan * 1699;
					cout << tarif << endl;
					
				} else if (daya = 2200) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "R-1/TR" << endl;
				
					tarif = dayaDigunakan * 1444;
					cout << tarif << endl;
					
				} else if (daya = 1300) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "R-1/TR" << endl;
				
					tarif = dayaDigunakan * 1444;
					cout << tarif << endl;
						
				} else if (daya = 900) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "R-1/TR" << endl;
				
					tarif = dayaDigunakan * 1352;
					cout << tarif << endl;
					
				} 
					
				
					
				
				}
			break;		
			
		case 'B' :
			namaPelanggan.erase(0,1);
			namaPelanggan.erase(0,1);
			
			if (daya > 200000) {
				cout << namaPelanggan << endl;
				cout << daya << endl;
				cout << dayaDigunakan << endl;
				cout << "B-3/TM" << endl;
				
				tarif = dayaDigunakan * 1114;
				cout << tarif << endl;
				
				} else if (daya <= 200000) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "B-2/TM" << endl;
				
					tarif = dayaDigunakan * 1444;
					cout << tarif << endl;
				
				}	else if (daya >= 6600) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "B-2/TM" << endl;
				
					tarif = dayaDigunakan * 1444;
					cout << tarif << endl;
				}
			break;	
		
		case 'I' :
			namaPelanggan.erase(0,1);
			namaPelanggan.erase(0,1);
			
			if (daya >= 30000000) {
				cout << namaPelanggan << endl;
				cout << daya << endl;
				cout << dayaDigunakan << endl;
				cout << "I-4/TT" << endl;
				
				tarif = dayaDigunakan * 996;
				cout << tarif << endl;
				
				} else if (daya >200000) {
					cout << namaPelanggan << endl;
					cout << daya << endl;
					cout << dayaDigunakan << endl;
					cout << "I-3/TM" << endl;
				
					tarif = dayaDigunakan * 1114;
					cout << tarif << endl;
				}
			break;
				
		default :
			cout << "0" << endl;
			cout << "0" << endl;
			cout << "0" << endl;
			cout << "0" << endl;
			cout << "0" << endl;	
				
				} 
	
	return 0;			
			}
