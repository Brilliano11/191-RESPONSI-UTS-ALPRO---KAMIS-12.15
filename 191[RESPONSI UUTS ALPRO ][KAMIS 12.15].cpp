//KODE C
#include <iostream>

using namespace std;

void belanja (){
	int password;
	string username ;
	long long int pas = 123;
	string usr = "Anggita";
	
	cout <<"login dulu lekk"<<endl;
	
	cout<<"masukan username : ";
	cin>>username;
	cout<<"masukan password : ";
	cin.ignore();
	cin>>password;
	
 if (username==usr&& password==pas){
 	cout<<"sudah login ";
 }else {
 	cout << "gagal";
 }
}
void menu(){
	long long int saldo = 400000, tambahsld;
	long long int totalsaldo;
	int barang;
	int pilihan;
	string jenis;
	int beli, brg;
	char cihuy = 'y';
	int hasil = saldo - beli;
	
	cout<<"pilihan opsi \n: ";
	cout<< "1. cek saldo \n 2. beli barang 3. alamat kamu \n 4.tambahkan diskon \n 5. ekspedisi  \n silahkan masukan pilihan";
	cin>> pilihan ;
	
	switch (pilihan){
		case 1:

			cout<< "saldo anda Rp. " << saldo<< endl;
			cout << "1. tambah saldo ";
				cin >>pilihan;
				if (pilihan==1){
					cout <<"masukan saldo ";
					cin>> tambahsld;
					totalsaldo = tambahsld += saldo ;
					cout << "saldo menjadi "<< totalsaldo ;

				}
				break;
		case 2 :
			cout << "barang yangingin di beli : \n" ;
			cout << "masukan barang ";
			cin >> jenis;
			cout<<" masukan harga";
				cin.ignore();
			cin	 >> beli ;
			cout << "barang berhasil di tambahkan /n ";
			cout << jenis << "Rp" << beli<<endl;
								hasil = saldo - beli;

			cout <<"apakah anda ingin beli barang (1/2)";
			cin >> pilihan;
				if(pilihan = 1 ){

					cout << hasil;
				}
			
			
							
			break;
		case 3 :
			
			break;
			
				
	}
		
	
	
}

int main (){
	belanja ();
	menu ();
}
