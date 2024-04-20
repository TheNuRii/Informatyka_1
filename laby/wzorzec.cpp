#include <iostream>
using namespace std;

int main(){
    string tekst, wzorzec;
    int ile_wzorcow = 0;
    bool czy_wzorzec = true;
    cout << "Tekst=";
    cin >> tekst;
    cout << "Wzorzec=";
    cin >> wzorzec;
    for (int i = 0; i < tekst.length(); ++i){
        if (tekst[i] == wzorzec[0]){
            czy_wzorzec = true;
            for (int j = 1; j < wzorzec.length(); ++j){
                if(tekst[i + j] != wzorzec[j]){
                    czy_wzorzec = false;
                    break;
                }
            }
            if(czy_wzorzec)
                ile_wzorcow ++;
        }
    }

    cout << "Wynik=" << ile_wzorcow;
    return 0;
}