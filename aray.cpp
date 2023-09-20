#include <iostream>
using namespace std;

//definisikan struktur/struct dengan nama mahasiswa untuk menyimpan data mahasiswa
struct mahasiswa{
    char nama[60]; //member pertama dari struct mahasiswa
    int umur;
    float ipk;
};

int main(){
    mahasiswa m1; //deklarasi variabel dari struct mahasiswa
    //input data mahasiswa
    cout<<"masukan data mahasiswa berikut ini:\n";
    cout<<"input nama ,mahasiswa:";
    cin>>m1.nama;
    cout<<"input umur mahasiswa:";
    cin<<m1.umur;
    cout<<"input ipk mahasiswa:";
    cin>>m1.ipk;

    //menampilkan informasi yang telah di input
    cout<<"\n----- Informasi mahasiswa-----"<<endl;
    cout<<"Nama: "<<m1.nama<<endl;
    cout<<"umur: "<<m1.umur<<endl;
    cout<<"IPK : "<<m1.ipk<<endl;

    return 0;
}