#include <iostream>
using namespace std;

void wydanie(int liczba, int krok){
    int baknoty []= {500, 200, 100, 50, 20, 10};
    if (liczba - baknoty[krok] == 0){
        cout << baknoty[krok];
        return;
    }
    if (liczba - baknoty[krok] > 0) {
        cout << baknoty[krok] << '+';
        wydanie(liczba - baknoty[krok], krok);
    }
    else{
        wydanie(liczba, krok + 1);
    }
}

int main(){
    int liczba;
    cin >> liczba;
    if (liczba >= 10 && liczba % 10 == 0)
        wydanie(liczba, 0);
    else
        cout << "Niepoprawne dane wejsciowe";
    return 0;
}