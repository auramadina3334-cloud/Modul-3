#include <iostream>
using namespace std;

int main () {
	int saldo = 500000;
	int tarik;
	
	cout << "Saldo anda : Rp" << saldo << endl;
	cout << "Masukan jumlah tarik tunai: Rp";
	cin >> tarik;
	
	try {
	    if (tarik > saldo) {
	        throw 500;
	    }
	    cout << "Cetak sisa saldo." << endl;
	    
	}
	catch (int error) {
	    cout << "Saldo insufficient" << error << endl;
	}
	return 0;
}
