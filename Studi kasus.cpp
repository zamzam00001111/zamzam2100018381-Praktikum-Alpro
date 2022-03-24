#include <iostream>
using namespace std;

int jml_harga(int x, int y) {
	return(x * y);
}

int main() {
	string nama[50];
	int jumlah[50], harga[50], hasil[50];
	int pil, total, diskon, bayar, kembali;

    cout<<"===============================\n";
    cout<<"           DAFTAR MENU         \n";
    cout<<"-------------------------------\n";
    cout<<"|| nama menu   || Harga menu ||\n";
    cout<<"-------------------------------\n";
    cout<<"||1.ayam goreng||   17.000   ||\n";
    cout<<"||2.ayam bakar ||   25.000   ||\n";
    cout<<"=============================||\n";
	
	int x = 1;
	while(true) {
		cout<<"1. Lanjut masukkan data"<<endl;
		cout<<"2. Selesai"<<endl;
		cout<<"Pilihan Anda : ";
		cin>>pil;
		cout<<"==================================="<<endl;
		
		switch(pil) {
			case 1 : {
				cout<<"Masukkan Menu (goreng/bakar): ";
				cin>>nama[x];
				cout<<"Masukkan Jumlah dibeli : ";
				cin>>jumlah[x];
				cout<<"Masukkan Harga Satuan : ";
				cin>>harga[x];
				cout<<endl;
				hasil[x] = jml_harga(jumlah[x], harga[x]);
				x++;
				break;
			}
			case 2 : {
				cout<<"Uang yang dibayar : ";
				cin>>bayar;
				cout<<"====================="<<endl<<endl;
				
				cout<<"Nama \t\tHarga"<<endl;
				if(nama)
				for(int y = 1; y < x; y++) {
					cout<<"Ayam "<<nama[y]<<"\t"<<hasil[y]<<endl;
					total = total + hasil[y];
				}
				
				if(total >= 45000) {
					diskon = total *10/100;
					total = total - diskon;
				}
				kembali = bayar - total;
				cout<<"Diskon \t"<<diskon<<endl;  
				cout<<"======================"<<endl;
				cout<<"Bayar \t\t"<<bayar<<endl;
				cout<<"Total \t\t"<<total<<endl;
				cout<<"Kembalian\t"<<kembali;
				
				return 0;
				break;
			}
		}
	}
	return 0;
}
