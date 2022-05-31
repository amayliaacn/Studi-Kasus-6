#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Studikasus{
	friend istream& operator>>(istream& in, Studikasus& a);
    friend ostream& operator<<(ostream& out, Studikasus& a);

    public:
    void inputbarang();
    void sorting();
	void searching();
	    
    private:
    int kode[10];
	string nama[20];
	int stock[10];
	int i, n, b, cari, ada;
    
	
};

void Studikasus::inputbarang(){
	cout<<"========================================================"<<endl;
	cout<<"|    PROGRAM SORTING DAN SEARCHING BARANG GUDANG       |"<<endl;
	cout<<"========================================================"<<endl;


	cout<<"Masukan banyak data = ";cin>>n;

 	for(i=0;i<n;i++){
    	cout<<endl;

      	cout<<"Data ke-"<<(i+1)<<":"<<endl;
      	cout<<"Input Kode Barang : ";cin>>kode[i];
      	cout<<"Input Nama Barang: ";cin>>nama[i];
      	cout<<"Input Stock Barang : ";cin>>stock[i];
      	cout<<endl;
      	}

      cout<<"Data Barang Anda"<<endl;
      cout<<"================================================="<<endl;
      cout<<"|   Kode Barang  |  Nama Barang  | Stock Barang |"<<endl;
	  cout<<"================================================="<<endl;

        for(i=0;i<n;i++){
        	cout<<"|         "<<kode[i]<<"\t\t\t"<<nama[i]<<"\t\t\t"<<stock[i]<<"       |"<<endl;

        }cout<<endl;

      cout<<"=================================================="<<endl;
}

void Studikasus::sorting(){
	for(i=0;i<n;i++){
             for(b=0;b<n-1;b++){
                if(kode[b] > kode[b+1]){
					kode[b]=kode[b];
                    kode[b]=kode[b+1];
                    kode[b+1]=kode[b];

                    nama[b]=nama[b];
                    nama[b]=nama[b+1];
					nama[b+1]=nama[b];

                    stock[b]=stock[b];
                    stock[b]=stock[b+1];
                	stock[b+1]=stock[b];

                     }
                  }
               }
               cout<<endl;
        cout<<endl;
        

    cout<<endl;

        cout<<"Setelah data diurutkan : "<<endl;
        cout<<"=================================================="<<endl;
        cout<<"|  Stock Barang  |  Nama Barang  |  Kode Barang  |"<<endl;
        cout<<"=================================================="<<endl;
        
        for(b=0;b<n;b++){
        cout<<"|        "<<stock[b]<<"\t\t\t"<<nama[b]<<"\t\t\t"<<kode[b]<<"         |"<<endl;
        }

        cout<<"=================================================="<<endl;		
}
void Studikasus::searching(){
	cout<<endl;

        cout<<"Masukan Kode Barang Untuk Mencari : ";
        cin>>cari;
        ada = 0;
        
        for(b=0;b<n;b++){
            if(kode[b]==cari){
                    ada=1;
                    cout<<"=================================================="<<endl;
                    cout<<"|  Kode Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
        			cout<<"=================================================="<<endl;
                    cout<<"|         "<<kode[b]<<"\t\t\t"<<nama[b]<<"\t\t\t"<<stock[b]<<"         |"<<endl;
                }
            }
                    cout<<"=================================================="<<endl;

        if (ada == 0)

            {
                cout<<"Data Tidak ditemukan"<<endl;
            }
}

int main(){
		Studikasus run;
		run.inputbarang();
		run.sorting();
		run.searching();
	};