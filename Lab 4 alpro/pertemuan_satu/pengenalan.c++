#include <iostream>
#include <conio.h>
using namespace std;


int main() {
    system("cls");
    string nama;
    char kom;
    string nim;
    float ipk;

    cout << "Hello world\n";

    // cin >> nama;
    // cout << nama;

    cout <<"Masukkan Nama : ";
    getline(cin, nama);

    cout <<"Masukkan Kom : ";
    cin >>kom;

    cout <<"Masukkan NIM : ";
    cin >>nim;

    cout <<"Masukkan IPK : ";
    cin >>ipk;

    cout << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ipk << endl;

}