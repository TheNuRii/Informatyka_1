#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Podaj rozmiar macierzy: ";
    cin >> N;
    if(N > 0 && N <= 10){
        int macierz [N][N];
        int licznik = 1;
        for (int i = 0; i < N; ++i){
            for (int j = 0; j < N; ++j){
                if (i < j + 1){
                    macierz[i][j] = licznik;
                    licznik ++;
                } else {
                    macierz[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < N; ++i){
            for (int j = 0; j < N; ++j)
                cout << macierz[i][j] << ' ';
            cout << '\n';
        }
    } else {
        cout << "Niepoprawny rozmiar macierzy";
    }

    return 0;
}