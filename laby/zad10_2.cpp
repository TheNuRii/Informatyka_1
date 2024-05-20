#include <iostream>
#include <cmath>
using namespace std;

float policz_modul(float rzeczywista, float urojona){
    return sqrt((rzeczywista*rzeczywista + urojona*urojona));
}

void scal(float tab[2][10], int start, int srodek, int stop){
    int i = start;
    int j = srodek + 1;

    while (i <= srodek && j <= stop){
        if (policz_modul(tab[0][i], tab[1][i]) <= policz_modul(tab[0][j], tab[1][j])) i++;
        else {
            int inde_x = j;
            float pom_rz = tab[0][j];
            float pom_ur = tab[1][j];
            while (inde_x > i){
                tab[0][inde_x] = tab[0][inde_x - 1];
                tab[1][inde_x] = tab[1][inde_x - 1];
                inde_x --;
            }

            tab[0][i] = pom_rz;
            tab[1][i] = pom_ur;
            i++;
            j++;
            srodek ++;
        }
    }
}

void merge_sort(float tab[2][10], int start, int stop){

    if(start >= stop){
        return;
    }
    else {
        int srodek = (stop + start)/2;
        merge_sort(tab, start, srodek);
        merge_sort(tab, srodek + 1, stop);
        scal(tab, start, srodek, stop);
    }

}

int main(){
    int N = 10;
    int M = 2;
    float tab[2][10];

    for (int i = 0; i < N; ++i){
        for (int j = 0 ; j < M; j++)
            cin >> tab[j][i];
    }

    merge_sort(tab, 0, N - 1);

    for (int i = 0; i < N; ++i){
        cout << tab[0][i] << ' ' << tab[1][i] << '\n';
    }

    return 0;
}