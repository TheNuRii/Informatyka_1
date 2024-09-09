#include "iostream";
using namespace std;

double suma(int N,  double tab[], double wynik){

    if (N < 0)
        return wynik;
    if (N % 2 == 0)
        return suma(N - 2, tab, wynik + tab[N]);
    else
        return suma(N - 1, tab, wynik);
}

int main(){
    const int N = 4;
    double tab[N] = {1, 2, 1, 4};
    double wynik = 0;

    cout << suma(N, tab, wynik);
    return 0;
}