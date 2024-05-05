#include <iostream>
using namespace std;

int main(){
    int liczba;
    cin >> liczba;
    unsigned int maska = 0x80000000;
    int l_bitow = 8 * sizeof(liczba);

    if (liczba != 0){
        bool pierwsza_1 = false;
        for (int i = 0; i < l_bitow; ++i){
            if((maska & liczba) != 0){
                cout << 1;
                pierwsza_1 = true;
            }
            else{
                if(pierwsza_1)
                    cout << 0;
            }
            maska >>= 1;
            if (i % 4 == 3 && pierwsza_1)
                cout << ' ';
        }
    }
    else
        cout << 0;
    return 0;
}