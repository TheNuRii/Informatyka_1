/*
 1. Utworzyć tablice całkowitą, tablice rzeczywistą i podać liczbe rzeczywistą i całkowitą. Utworzyć 2 funkcje. Jedną dla rzeczywistych i całkowitych w funkcja ma znaleźć parę elementów tablicy odpowiadającej liczbie podanej wcześniej.
Tablica: 1 3 4 5 6
Liczba podana wcześniej:9
Wynik: 2 pary (6+3) i (5+4)
2. Rekurencyjnie napisać iloczyn dwóch tablic a i b i zapisać w tablicy c. Wszysktie tablice utworzyć z liczby którą wprowadzmy w zakresie.
Nie można używać znaku iloczynu a rekurencje zrobić w main. Tablice c utworzyć w void.
3.
Wyszukać binarnie liczbę z tablicy podanej na początku przez użytkownitka. Funkcja ma znaleźć indeksy tablicy gdzie jest szukana liczba
 */

#include <iostream>
using namespace std;

// Funkcje do zadania 1

void znajdz_liczbe_szukana_cal(int tab[], int N, int liczba){
    int czy_wykorzystano[6] = {0};
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (tab[i] + tab[j] == liczba){
                if (czy_wykorzystano[i] == 0 || czy_wykorzystano[j] == 0){
                    cout << tab[i] << " + " << tab[j] << endl;
                    czy_wykorzystano[i] = 1;
                    czy_wykorzystano[j] = 1;
                }

            }

        }
    }
    return;
}

void znajdz_liczbe_szukana_rzecz(double tab[], int N, double liczba){
    int czy_wykorzystano[6] = {0};
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (tab[i] + tab[j] == liczba){
                if (czy_wykorzystano[i] == 0 || czy_wykorzystano[j] == 0) {
                    cout << tab[i] << " + " << tab[j] << endl;
                    czy_wykorzystano[i] = 1;
                    czy_wykorzystano[j] = 1;
                }
            }
        }
    }
    return;
}

// Funkcje do zadania 2

void iloczyn(int a[], int b[], int c[], int indeks, int rozmiar){
    if(indeks == rozmiar) return;

    c[indeks]=0;
    for(int i=0; i<b[indeks]; ++i){
        c[indeks] += a[indeks];
    }
    iloczyn(a,b,c,indeks+1,rozmiar);
}



// Funkcje do zadadania 3

void zamien(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void simple_sort(int tab[], int const N){
    int index_min;
    for (int i = 0; i < N; ++i){
        index_min = i;
        for (int j = i; j < N; ++j){
            if (tab[index_min] > tab[j])
                index_min = j;
        }
        zamien(tab[i], tab[index_min]);
    }
}

void binary_search(int tab[], int szukana, int right, int left) {
    int mid = (right + left) / 2;

    if (tab[mid] == szukana){
        cout << "Szukana liczba znajduje się na pozycji: " << mid;
        return;
    }

    if (tab[mid] > szukana){
        right = mid - 1;
        binary_search(tab, szukana, right, left);
    } else {
        left = mid + 1;
        binary_search(tab, szukana, right, left);
    }
}
int main(){
    int zad;
    cin >> zad;
    switch (zad) {
        case 1:{
            int liczba_c;
            double liczba_r;
            int N = 6;
            int liczby_cal[6];
            double liczby_rze[6];
            for (int i = 0; i < N; i++){
                cin >> liczby_cal[i];
            }
            cin >> liczba_c;
            znajdz_liczbe_szukana_cal(liczby_cal, N, liczba_c);

            for (int i = 0; i < N; ++i) {
                cin >> liczby_rze[i];
            }

            cin >> liczba_r;

            znajdz_liczbe_szukana_rzecz(liczby_rze, N, liczba_r);
            break;
        }
        case 2:{
            int rozmiar;
            cout <<"podaj rozmiar tablicy: ";
            cin >>rozmiar;

            int a[rozmiar],b[rozmiar],c[rozmiar];

            cout <<"podaj elemnty tablicy a: ";
            for(int i=0;i<rozmiar;i++){
                cin >>a[i];
            }

            cout <<"podaj elemnty tablicy b: ";
            for(int i=0;i<rozmiar;i++){
                cin >>b[i];
            }
            iloczyn(a,b,c,0,rozmiar);

            cout <<"wynik tablicy c: ";
            for(int i=0;i<rozmiar;i++){
                cout <<c[i]<<" ";
            }
            cout <<endl;
            break;
        }
        case 3:{
            int N = 6;
            int tablica[6];
            int szukana_liczba;

            for (int i = 0; i < N; ++i) {
                cin >> tablica[i];
            }

            cout << "Podaj szukaną wartosc: ";
            cin >> szukana_liczba;

            simple_sort(tablica, N);
            binary_search(tablica, szukana_liczba, N - 1, 0);

            break;
        }
        default:{
            cout << "Niepoprawny numer zadania";
        }
    }
    return 0;
}
