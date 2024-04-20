#include <iostream>
using namespace std;

int main(){
    int liczba;
    cin >> liczba;
    unsigned int mask = 0x80000000;
    unsigned int mask_2 = 1;
    int l_bitow = 8 * sizeof(mask);
    int liczba_zer = 0;
    int ile_nad_zer = 0;
    if (liczba != 0){
        bool pierwsza_1 = false;
        for (int i = 0; i < l_bitow; ++i){
            if((mask & liczba) != 0)
                pierwsza_1 = true;

            if(pierwsza_1){
                if((mask & liczba) == 0)
                    liczba_zer ++;
            }
            mask >>= 1;
        }

        for (int i = 0; i < l_bitow; ++i){
            if ((mask_2 & liczba) != 0)
                break;
            else
                ile_nad_zer ++;
            mask_2 <<= 1;
        }
    }

    cout << liczba_zer - ile_nad_zer;
    return 0;
}
