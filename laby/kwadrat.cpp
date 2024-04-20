#include <iostream>
using namespace std;

int main(){
    int h;
    cout << "Podaj wysokosc=";
    cin >> h;
    char tab [5][5];

    for(int i = 0; i < h; ++i){
        for (int j = 0; j < h; ++j)
            tab[i][j] = '+';
    }

    for(int i = 0; i < h; ++i){
        for (int j = 0; j < h; ++j){
            if (i == j)
                tab[i][j] = ' ';
        }

    }

    for(int i = 0; i < h; ++i){
        for (int j = 0; j < h; ++j){
            if (i == h - j - 1)
                tab[i][j] = ' ';
        }

    }

    for(int i = 0; i < h; ++i){
        for (int j = 0; j < h; ++j)
            cout << tab[i][j];
        cout << endl;
    }

    for(int i = 0; i < h; ++i){
        for (int j = 0; j < h; ++j)
            if (i == j || i == h - j - 1)
                cout << ' ';
            else
                cout << '+';
        cout << endl;
    }

    return 0;
}