#include <iostream>
using namespace std;

int main(){
    char slowo[] = "sroda";
    // Postawje tablica 6 znakowa.Ostani element tablicy jest Null

    // zmiana wielkosci tablicy "Dynamiczne" - powiedzmy na teraz
    const int max_roz_1 = 4;
    int tab_1[max_roz_1] = {1, 2, 3, 4};
    const int max_roz_2 = 3;
    int tab_2[max_roz_2];
    for (int i = 0; i < max_roz_2; ++i){
        tab_2[i] = tab_1[i];
    }

    const int sizeX = 2;
    const int sizeY = 3;
    float pricees[sizeX][sizeY];
    // Adress w pamięci w macierzy
    // dla price[0][4]
    // 0*sizeY + 4 = 4 - aders od poczatku tablicy

    return 0;
}