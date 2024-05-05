#include <iostream>
using namespace std;

int sekwencje(int pierwsza, unsigned int druga){
    unsigned int maska = 0x80000000;
    const int l_bitow = 8 * sizeof(pierwsza);
    int bin_pierwsza[l_bitow];
    int bin_druga[l_bitow];
    int ile_sekwencji = 0;
    for (int i = 0; i < l_bitow; ++i){
        if ((pierwsza & maska) != 0){
            bin_pierwsza[i] = 1;
        } else{
            bin_pierwsza[i] = 0;
        }

        if ((druga & maska) != 0){
            bin_druga[i] = 1;
        } else{
            bin_druga[i] = 0;
        }

        maska >>= 1;
    }
    int ile_zer_pier = 0;
    int ile_zer_druga = 0;

    for (int i = 0; i < l_bitow; ++i){
        if(bin_pierwsza[i] == 1)
            break;
        ile_zer_pier++;
    }

    for (int i = 0; i < l_bitow; ++i){
        if(bin_druga[i] == 1)
            break;
        ile_zer_druga++;
    }

    const int N_wzorzec = l_bitow - ile_zer_pier;

    for (int i = ile_zer_druga; i < l_bitow; ++i){
        if (bin_druga[i] == bin_pierwsza[ile_zer_pier]){
            bool czy_wzorzec = true;
            for (int j = 0; j < N_wzorzec; ++j){
                if(bin_druga[i + j] != bin_pierwsza[j + ile_zer_pier]){
                    czy_wzorzec = false;
                    break;
                }
            }
            if(czy_wzorzec)
                ile_sekwencji++;
        }
    }
    return ile_sekwencji;
}

int main(){
    int pierwsza, druga;
    cin >> pierwsza >> druga;
    cout << sekwencje(pierwsza, druga);
    return 0;
}