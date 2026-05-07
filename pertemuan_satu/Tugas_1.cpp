#include <iostream>   // untuk cout dan cin
#include <string>     // untuk tipe data string
using namespace std;  // supaya tidak perlu tulis std::

int main(){
    system("cls");  // membersihkan 

    string nama,nim,departemen,jabatan;  // deklarasi variabel string
    int umur;                            // menyimpan umur
    float gaji;                          // menyimpan gaji

    cout<<"masukkan nama:"; 
    getline(cin,nama);   // input nama 

    cout<<"masukkan nim:";
    cin >> nim;          // input nim

    cout<<"masukkan umur:";
    cin >> umur;         // input umur

    cout<<"masukkan departemen:";
    cin >> departemen;   // input departemen

    cout<<"masukkan jabatan:";
    cin >> jabatan;      

    cout<<"masukkan gaji anda:";
    cin >> gaji;         // input gaji

    cout<<"==== Data Pegawai ===="<<endl;  // judul output
    cout<<"nama : "<< nama << endl;        // menampilkan nama
    cout<<"nim  : "<< nim << endl;         // menampilkan nim
    cout<<"departemen  : "<< departemen << endl; // menampilkan departemen
    cout<<"jabatan : "<< jabatan << endl;  // menampilkan jabatan
    cout<<"umur : " << umur << endl;       // menampilkan umur
    cout<<"gaji : "<< gaji << endl;        // menampilkan gaji

}