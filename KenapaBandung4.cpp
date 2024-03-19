#include<iostream>
#using namespace  std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNIke = 350;

void input(){
    cout << "Masukan jumlah Adidas";
    cin >> nAdidas;

    cout << "Masukan jumlah Puma";
    cin >> nPuma;

    cout << "Masukan jumlah New Balance";
    cin >> nNB;

    cout << "Masukan jumlah Compass";
    cin >> nCompass;

    cout << "Masukan jumlah Nike";
    cin >> nNike;
}

int totalHarga(){
    return (nAdidas * hAdidas) + (hNB * nNB) + (hPuma * nPuma) + (hNike * nNike);
}

void display(){
    cout << endl;
    cout << "=======================" << endl;
    cout << endl;
    cout << "jumlah Puma = " << nPuma << endl;
    cout << "jumlah Adidas =" << nAdidas << endl;
    cout << endl;
    cout << "Total Harga =  Rp." << totalHarga() << endl;
    }

int main(){
    
    input();
    display();
}
