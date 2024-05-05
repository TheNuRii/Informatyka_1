#include <iostream>
using namespace std;

int ile_jedynek(unsigned int liczba){
    int ile_razy = 0;
    unsigned int mask = 1;
    int l_bitow = sizeof(liczba) * 8;
    for (int i = 0; i < l_bitow; ++i){
        if((liczba & mask) != 0)
            ile_razy ++;
        mask <<= 1;
    }
    return ile_razy;
}

int znajdz(const int tablica[], int N){
    int index = 0;
    int max = 0;
    for (int i = 0; i < N; ++i){
        if(tablica[i] > max && index <= i){
            max = tablica[i];
            index = i;
        }

    }
    return index;
}
int main(){
    int tab[10];
    for (int i = 0; i < 10; ++i) {
        cin >> tab[i];
    }

    int wyniki[10];
    for (int i = 0; i < 10; ++i){
        wyniki[i] = ile_jedynek(tab[i]);
    }

    cout << tab[znajdz(wyniki, 10)];
    return 0;
}