#include <iostream>
using namespace std;

int main(){
    int N, p;
    cout << "N=";
    cin >> N;
    if (N > 0 && N <= 20){
        int wartosci[20];
        int wynik[20];
        cout << "Wartosci=";
        for (int i = 0; i < N; ++i){
            cin >> wartosci[i];
        }
        cout << "P=";
        cin >> p;
        if (p > 0){
            for (int i = 0; i < p; ++i){
                wynik[i] = wartosci[N-p + i];
            }
            for (int i = 0; i < N - p; ++i){
                wynik[i + p] = wartosci[i];
            }
            cout << "Wynik=[";
            for (int i = 0; i < N - 1; ++i)
                cout << wynik[i] << ' ';
            cout << wynik[N - 1]<< ']';
        } else {
            cout << "Niepoprawne dane wejsciowe";
        }

    } else{
        cout << "Niepoprawne dane wejsciowe";
    }

    return 0;
}