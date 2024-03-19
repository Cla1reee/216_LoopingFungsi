#include<iostream>
using namespace std;

int main(){
    string pilihan;
    do {
        cout << "makan" << endl;
        cout << "main game" << endl;
        cout << "ibadah" << endl;

        cout << "apakah anda masih hidup? (yes/no)";
        cin >> pilihan;

    }
    while (pilihan == "yes");
}