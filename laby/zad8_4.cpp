#include <iostream>
using namespace std;

double wyraz_ciagu(int n){

    if (n == 1){
        return 1;
    } else if (n == 2){
        return 0.5;
    }

    return -2 * wyraz_ciagu(n - 1);
}

int main(){
    int liczba;
    cin >> liczba;
    if (liczba > 0)
        cout << wyraz_ciagu(liczba);
    else
        cout << "Niepoprawne dane wejsciowe";
    return 0;
}