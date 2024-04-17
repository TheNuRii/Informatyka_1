#include <iostream>
using namespace std;

// Sortowanie przez wstawanie
void insertion_sort(int tab[], const int size){
    int temp, j;

    for (int i = 1; i < size; ++i){
        temp = tab[i];
        for (j = i - 1; j >= 0 && tab[j] > temp; --j)
            tab[j + 1] = tab[j];

        tab[j + 1] = temp;
    }
}

// Sortowanie przez wybieranie
void selection_sort(int tab[], const int size){
    int k;
    for (int i = 0; i < size; ++i){
        k = i;
        for (int j = i + 1; j < size; ++j){
            if (tab[j] < tab[k])
                tab[k] = tab[j];
        }

        swap(tab[k], tab[i]);
    }
}


int main(){
    return 0;
}