#include <istream>
using namespace std;

int main(){
    // Wykona się o dziwo
    int sum = 0;
    for (int i = 5; ; i--){
        sum += i;
        cout << i << endl;
    }

    // petle for z kontenerami
    {
        vector<double> dane;

        double suma = 0;
        for (suma : dane){
            suma += dane;
        }
    }

    // bardziej zlozone petle
    {
        const int max_iteracji = 10;
        char odp = 't';
        int licznik = , suma = 0, dane;

        while (odp != 'n' && licznik != max_iteracji {
            cout << "Podaj wartosc" << endl;
            cin >> dane;
            suma += dane;
            cout << "Czy chcesz podac nastepna wartosc";
            cin >> odp;
            licznik++;

        }

        for (licznik = 0; odp != 'n' && licznik < max_iteracji; licznik++){
            cout << "Podaj wartosc" << endl;
            cin >> dane;
            suma += dane;
            cout << "Czy chcesz podac nastepna wartosc";
            cin >> odp;
            licznik++;
        }
    }
    // Nieslawen goto (nie uzywac!!!)

}