#include <iostream>
using namespace std;

void zamiana(string &pierwsze_slow, string &drugie_slow){
    string pom = pierwsze_slow;
    pierwsze_slow = drugie_slow;
    drugie_slow = pom;
}

bool czy_zamienic(string slowo_1, string slowo_2){
    int slowo_1_acii = int(slowo_1[0]);
    int slowo_2_ascii = int(slowo_2[0]);
    //cout << slowo_1_acii << ' ' << slowo_2_ascii << endl;
    //cout << slowo_1 << ' ' << slowo_2 << endl;
    if (slowo_1.length() > slowo_2.length()){
        return true;
    }
    else if (slowo_1.length() == slowo_2.length() && slowo_1_acii > slowo_2_ascii) {
        return true;
    }

    return false;
}

void selcet_sort(string imiona[], const int N){
    int min_index;
    for (int i = 0; i < N; ++i){
        min_index = i;
        for (int j = i; j < N; ++j){
            if (czy_zamienic(imiona[min_index], imiona[j])){
                min_index = j;
            }
        }
        //cout << imiona[min_index].length() << endl;
        zamiana(imiona[i], imiona[min_index]);
    }
}

bool binary_search(string tab[], const int N, int &index_imie, string poszukiwana){
    int right = N - 1;
    int left = 0;
    int mid = (right + left)/2;

    while (left <= right){
        //cout << mid << ' ';
        bool czy_znaleziono = true;
        //cout << tab[mid] << ' ' << poszukiwana << endl;
        for (int i = 0; i < poszukiwana.length(); i++){
            if (tab[mid][i] != poszukiwana[i]){
                czy_znaleziono = false;
                break;
            }
        }
        if (czy_znaleziono){
            index_imie = mid;
            return true;
        }
        if (czy_zamienic(tab[mid], poszukiwana)){
            right = mid - 1;
            mid = (right + left)/2;
        }
        else {
            left = mid + 1;
            mid = (right + left)/2;
        }
    }

    return false;
}
int main (){
    int N = 10;
    string tab[10];
    string imie;
    int index_imie;

    for (int i = 0; i < N; ++i){
        cin >> tab[i];
    }

    cin >> imie;

    selcet_sort(tab, N);
    /*for (int i = 0; i < N; ++i){
        cout << tab[i] << ' ';
    }
     */
    bool czy_znaleziono = binary_search(tab, N, index_imie, imie);

    if (czy_znaleziono){
        int ile_razy = 0;
        bool czy_pierwsze = true;
        for (int i = 0; i < N; ++i){
            if (tab[i] == imie){
                ile_razy++;
                if(czy_pierwsze){
                    index_imie = i;
                    czy_pierwsze = false;
                }
            }

        }
        if (ile_razy > 1){
            cout << index_imie << ' ' << ile_razy;
        } else {
            cout << index_imie;
        }
    } else {
        cout << "brak";
    }

    return 0;
}