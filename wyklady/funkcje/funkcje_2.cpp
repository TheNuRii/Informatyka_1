#include <iostream>
using namespace std;
/* Jak kompliator rozpoznaje funkcje:
 * Dokladnie dopasowane
 * Dopasowanie z wykorzystaniem promocji typu
 * Dopasowanie z wykorzysatniem zwyklej konwersji
 * Dopasowanie z wykorzysatniem konwersji zdefiniowanej przez uzytkownika
*/

// Zmienne statyczne
void f1(int a){
    static double b = 5;
}
// Przeciazenie
void print (int a){
    cout << a << endl;
}

void print(string a){
    cout << a << endl;
}
// Funkcja typu inline
inline double square(double x) {return x * x;}

int main(){

    return 0;
}