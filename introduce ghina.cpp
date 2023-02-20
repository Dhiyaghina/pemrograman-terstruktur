#include <iostream>
using namespace std;
int main(){
	string a;
	int jumlah;
	getline (cin,a);
	
//jumlah huruf
	jumlah =a.length();
	
//kelas
	string b;
	cin>>b;
	
//nilai
	string c;
	cin>>c;
	
//output
	cout<<"Izin memperkenalkan diri nama saya "<<a<< "dengan jumlah huruf "<<jumlah<<". Saya mahasiswa S1 Ilmu Komputer dari kelas "<<b<<". Nilai DDP saya adalah "<<c;
}
