#include <iostream>
using namespace std;

// Tablice zawsze przekazywane są przez referencje!
// Const uchroni nas przez zmianom wartosci w orginalnej tablicy
// Po przez referencje mozemy zrócić nie pośrednio wiele wartosci

void print_2(const int tab[], const int rozmiar){
    for (int i = 0; i < rozmiar; ++i)
        cout << tab[i] << endl;
}

int f1(int& x){
    x++;
    return x;
}
// Przekazywanie przez wartosc przez stala referencje (odwoluje sie do orginalu ale nie mozna jej napisac)
void print(const string& name){
    cout << name << endl;
    // name = "cos"; nie można przypisac
}

int main(){
    // Przekazywanie przez wartosc przez referencje (odwoluje sie do orginalu)
    int x2 = 1;
    int x3 = f1(x2);
    cout << x3 << endl << x2 << endl;
    string name = "pisz";
    print(name);
    return 0;
}