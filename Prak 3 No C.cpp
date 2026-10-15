#include <iostream>
using namespace std;

int main(){
	int umur;
	cout<<"Masukkan umur Anda:";
	cin>>umur;
	
	try{
		if (umur<17){
			throw "Belum cukup umur";
		}
		cout<<"Proses pembutan SIM dilanjutkan."<<endl;
	}
	
	catch (const char* error){
		cout<<"Gagal"<<error<<endl;
	}
	return 0;
}
