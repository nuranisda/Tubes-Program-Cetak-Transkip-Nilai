#include"conio.h"
#include <iostream>
using namespace std;

int main();

struct transcript{
string matkul[9]={"Algoritma dan Pemrograman", "Pemrograman Berorientasi Objek", "Strategi Algoritma", "Visualisasi Data dan Informasi",
				"Sistem informasi", "Sosio Informatika dan Profesionalisme", "Basis Data", "Teori Bahasa Formal dan Automata", "Proyek Perangkat Lunak"};
	int jumSKS[9]={2,3,2,2,2,2,2,2,3};
	float nilai[9];
	int mutu[9];
	char indeks[9];
	string nama;
	string prodi;
	int nim;
};

void search (transcript x);

int main (){
	
	int pilihan,pilihan2,pilihan3;
	int i,j;
	int posisi,temp;
	string matkul2;
	bool satu = false;
	
	
	string cari;
	transcript x;
	bool found=false;
	
	awal:
	cout<<"==Menu Pilihan=="<<endl;
	cout<<"1. Isi Nilai "<<endl;
	cout<<"2. Urutkan   "<<endl;
	cout<<"3. Cari Nilai Berdasarkan Mata Kuliah"<<endl;
	cout<<"4. Keluar "<<endl;
	cout<<endl;
	cin>>pilihan;
	
	if(pilihan != 1 && satu == false){
		cout<< "isi nilai dahulu!" << endl;
		getch();
		system("cls");
		goto awal;
	}
	
	cout<<endl;
	system("cls");
	cout<<"Masukkan Nama :";
	cin.ignore(); 
	getline(cin,x.nama);
	cout<<"Masukkan NIM  : " ;
	cin>>x.nim;
	cout<<"Masukkan Nama Program Studi :"; cin>>x.prodi;
	cout<<endl;
	if(pilihan==1){
			satu = true;
			system("cls");
			for(i=0;i<9;i++){
				
				cout<<x.matkul[i]<<endl;
				cout<<"Jumlah SKS : "<<x.jumSKS[i]<<endl;
				cout<<"masukkan nilai "; cin>>x.nilai[i];
				cout<<endl;
			}
			for(i=0;i<9;i++){
				if(x.nilai[i]>=85){
					x.indeks[i]='A';
				}else if(x.nilai[i]>=70){
					x.indeks[i]='B';
				}else if(x.nilai[i]>=55){
					x.indeks[i]='C';
				}else if(x.nilai[i]>=40){
					x.indeks[i]='D';
				}else{
					x.indeks[i]='E';
				}
			}

			for(i=0;i<9;i++){
				if(x.indeks[i]=='A'){
					x.mutu[i]=x.jumSKS[i]*4;
				}else if(x.indeks[i]=='B'){
					x.mutu[i]=x.jumSKS[i]*3;
				}else if(x.indeks[i]=='C'){
					x.mutu[i]=x.jumSKS[i]*2;
				}else if(x.indeks[i]=='D'){
					x.mutu[i]=x.jumSKS[i]*1;
				}else{
					x.mutu[i]=x.jumSKS[i]*0;
				}
			}
			
cout<<"___________________________________________________________________________________________"<<endl;
cout<<"||         Mata kuliah                  SKS             NILAI             MUTU           ||"<<endl;
cout<<"||_______________________________________________________________________________________||"<<endl;
cout<<"|| Algoritma dan Pemrograman             2"<<"               "<<x.nilai[0]<<"                "<<x.mutu[0]<<"              |"<<endl;
cout<<"|| Pemrograman Berorientasi Objek        3"<<"               "<<x.nilai[1]<<"                "<<x.mutu[1]<<"              |"<<endl;
cout<<"|| Strategi Algoritma                    2"<<"               "<<x.nilai[2]<<"                "<<x.mutu[2]<<"              |"<<endl;
cout<<"|| Visualisasi Data dan Informasi        2"<<"               "<<x.nilai[3]<<"                "<<x.mutu[3]<<"              |"<<endl;			
cout<<"|| Sistem informasi                      2"<<"               "<<x.nilai[4]<<"                "<<x.mutu[4]<<"              |"<<endl;
cout<<"|| Sosio Informatika dan Profesionalisme 2"<<"               "<<x.nilai[5]<<"                "<<x.mutu[5]<<"              |"<<endl;
cout<<"|| Basis Data                            2"<<"               "<<x.nilai[6]<<"                "<<x.mutu[6]<<"              |"<<endl;
cout<<"|| Teori Bahasa Formal dan Automata      2"<<"               "<<x.nilai[7]<<"                "<<x.mutu[7]<<"              |"<<endl;
cout<<"|| Proyek Perangkat Lunak                3"<<"               "<<x.nilai[8]<<"                "<<x.mutu[8]<<"              |"<<endl;				
cout<<"||_________________________________________________________________________________________|"<<endl;
cout<<"||  Jumlah :                             20"<<"                                            |"<<endl;
cout<<"||_________________________________________________________________________________________|"; 
cout<<endl;

				cout<<endl;
	cout<<"1.Kembali ke menu utama "<<endl;
	cout<<"2.Keluar "<<endl;
		cin>>pilihan3;
		if(pilihan3==1){
			goto awal;
				}else{
				return 0; 
				}
			cout<<endl;
	}else if(pilihan==2){
	system("cls");
	cout<<"1. Berdasarkan Nilai(Ascending)"<<endl;
	cout<<"2. Mutu Terendah sampai Tertinggi "<<endl;
			cin>>pilihan2;
			 if(pilihan2==1){
				for(i=0;i<9;i++){
					for(j=i;j<9;j++){
							
if(x.nilai[i]>x.nilai[j]){
								
temp=x.nilai[i];	
x.nilai[i]=x.nilai[j];
			x.nilai[j]=temp;	
							 }
						 }
					 }
					cout<<endl;
	cout<<"==Hasil dari Pengurutan Nilai=="<<endl; 
		for(i=0;i<9;i++){
		cout<<endl;
		cout<<x.nilai[i];
							
	}cout<<endl;
cout<<"1.Kembali ke menu utama "<<endl;
cout<<"2.Keluar "<<endl;
	cin>>pilihan3;
		if(pilihan3==1){
			goto awal;
		}else{
			return 0; 
		}		
	}else{
	for(i=0;i<9;i++){
	for(j=i;j<=9;j++){
	if(x.mutu[i]>x.mutu[j]){
		temp=x.mutu[i];
		x.mutu[i]=x.mutu[j];
		x.mutu[j]=temp;	
							 }
						 }
					 }
	 cout<<endl;
	cout<<"Hasil dari Pengurutan Nilai"<<endl;
	for(i=0;i<9;i++){
		cout<<endl;
		cout<<x.mutu[i];
						
					 }
			cout<<endl;
			cout<<"1.Kembali ke menu utama "<<endl;
			cout<<"2.Keluar "<<endl;
				cin>>pilihan3;
					if(pilihan3==1){
						goto awal;
					}else{
						return 0; 
							}
			}
				cout<<endl;
   }else if(pilihan==3){
	system("cls");
	cout<<"||            DAFTAR MATA KULIAH         ||"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"|| Algoritma dan Pemrograman             ||"<<endl; 
	cout<<"|| Pemrograman Berorientasi Objek        ||"<<endl;            
	cout<<"|| Strategi Algoritma                    ||"<<endl;     
	cout<<"|| Visualisasi Data dan Informasi        ||"<<endl;     
	cout<<"|| Sistem informasi                      ||"<<endl; 
	cout<<"|| Sosio Informatika dan Profesionalisme ||"<<endl;     
    cout<<"|| Basis Data                            ||"<<endl;     
	cout<<"|| Teori Bahasa Formal dan Automata      ||"<<endl;     
	cout<<"|| Proyek Perangkat Lunak                ||"<<endl;     
		cout<<endl;
		search(x);
	cout<<endl;	
	cout<<"1.Kembali ke menu utama "<<endl;
	cout<<"2.Keluar "<<endl;
	cin>>pilihan3;
		if(pilihan3==1){
			goto awal;
		}else{
			return 0; 
		}
	}else if(pilihan==4){
		return 0;
	}else{
		cout<<"Masukkan pilihan yang benar!"<<endl;
	}
	
	return 0;			
	}
void search (transcript x){
	string matkul2;
	bool found = false;
	int posisi;
	
	cout<<"Masukkan nama mata kuliah "<<endl;
		cin.ignore();
		getline(cin,matkul2);
		for(int i=0;i<9;i++){
			if(x.matkul[i]==matkul2){
				found=true;
				posisi=i;
	
			}
		}
		cout<<endl;
			if(found==true)	{
				cout<<"nilai matakuliah : ";
				cout << x.matkul[posisi] << endl;
				cout<<"Nilai : ";
				cout << x.nilai[posisi] <<endl;
			}else{
				cout<<"Nama Mata Kuliah tidak ditemukan"<<endl;
			}
}	
