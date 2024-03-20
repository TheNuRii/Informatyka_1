#include <iostream>
using namespace std;

int main(){
    // Pierwsza metoda
    {
        int wartosc;
        cout << "Podaj wartosc calkowita"<< endl;
        cin >> wartosc;

        int suma_bitow = 0;
        int maska = 1;
        for (int i = 0; i < 32; ++i){
            if (wartosc & maska) suma_bitow++;
            maska <<=1 ;
        }
        cout << "Liczba jedynek wynosi: " << suma_bitow;
    }

    // Druga metoda (2 razy lepsza)
    {
        int wartosc;
        cout << "Podaj wartosc calkowita"<< endl;
        cin >> wartosc;

        int liczba_jedynek = 0;
        while (wartosc){
            wartosc = wartosc & (wartosc - 1);
            ++liczba_jedynek;
        }


        cout << "Liczba jedynek wynosi: " << liczba_jedynek;
    }

    // Trzecia metoda (zlożoność obliczneniowa log(n)
    {
        int wartosc; cin >> wartosc;
        const int maska_1a = 0x5555555;
        const int maska_1b = 0xAAAAAAA;
        // cos tam dalej

        int temp_1 = wartosc
    }

    return 0;
}