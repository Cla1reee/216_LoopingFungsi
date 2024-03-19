#include<iostream>
using namespace std;

int main(){

    int bilangan;

    srand (time(0));
    bilangan = rand() % 10;
    while (bilangan%2){
        cout << "Bilangan " << bilangan << " adalah ganjil" << endl;
        bilangan=rand() %  10;
    }
    cout << "Bilangan " << bilangan << " adalah genap" << endl;


}