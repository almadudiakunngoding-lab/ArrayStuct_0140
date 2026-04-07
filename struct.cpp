#include <iostream>
using namespace std;

struct orang{
    string nama;
    string alamat;
    string umur;
    int user;
};

int main(){
    //Deklarasi variasi struct
    orang mhs;
    //mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data Tampil" << endl;
    cout << "Nama : "  << mhs.nama  << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "umur : " << mhs.umur << endl;
}