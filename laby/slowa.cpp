#include <iostream>
using namespace std;

int main(){
    string tab [8];

    for (int i = 0; i < 8; ++i){
        cin >> tab[i];
        if (tab[i].length() > 7){
            cout << "za dlugie";
            i--;
        }
    }
    string pod_1;
    int min_liter = 8;
    for(int i = 1; i < 8; ++i){
        if (i % 2 != 0){
            int ile_maly = 0;
            for (int j = 0; j < tab[i].length(); ++j){
                if (int(tab[i][j]) > 97 && int(tab[i][j]) < 122)
                    ile_maly ++;
            }

            if (min_liter > ile_maly)
                pod_1 = tab[i];
        }
    }
    cout << "Podpunkt 1: " << pod_1;

    string pod_2;
    int max_liter = 0;
    for(int i = 0; i < 8; ++i){
        if (i % 2 == 0){
            int ile_max = 0;
            for (int j = 0; j < tab[i].length(); ++j){
                if (int(tab[i][j]) > 65 && int(tab[i][j]) < 99)
                    ile_max ++;
            }

            if (max_liter < ile_max)
                pod_2 = tab[i];
        }
    }
    cout << "Podpunkt 2: " << pod_2;
    return 0;
}
