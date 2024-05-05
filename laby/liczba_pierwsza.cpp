#include <iostream>
#include <math.h>
using namespace std;

bool czy_pierwsza(int liczba){
    if (liczba == 0 || liczba == 1){
        return false;
    }
    for(int i = 2; i < sqrt(liczba); ++i){
        if(liczba % i == 0 && liczba != i){
            return false;
        }
    }
    return true;
}

int main(){
    unsigned int liczba;
    cin >> liczba;
    if (czy_pierwsza(liczba)){
        cout << "TAK";
    } else{
        cout << "NIE";
    }

    return 0;
}