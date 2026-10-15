#include <iostream>
using namespace std;

int main () {
	int kecepatanmaksimal = 5000;
	int pilihan;
	
	cout << "Kecepatan Putar :" ;
	cin >> pilihan;
	
	try {
	    if (pilihan > kecepatanmaksimal) {
	        throw 500;
	    }
	    cout << "Kecepatan sekarang:" <<pilihan << endl;
	    
	}
	catch (int error) {
	    cout << "Overload Error 500" << error << endl;
	}
	return 0;
}
