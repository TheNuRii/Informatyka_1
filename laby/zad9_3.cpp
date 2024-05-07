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
    cout << slowo_1_acii << ' ' << slowo_2_ascii << endl;
    if (slowo_1.length() > slowo_2.length()){
        return true;
    }

    else if (slowo_1.length() == slowo_2.length() && slowo_1_acii < slowo_2_ascii) {
        return true;
    }

    return false;
}

void selcet_sort(string imiona[], const int N){
    int min_index;
    for (int i = 0; i < N - 1; ++i){
        min_index = i;
        for (int j = i; j < N; ++j){
            if (imiona[j].length() < imiona[min_index].length()){
                min_index = j;
            }
        }
        //cout << imiona[min_index] << endl;
        if (czy_zamienic(imiona[i], imiona[min_index])){
            zamiana(imiona[i], imiona[min_index]);
        }
    }
}

int main(){
    int const N = 6;
    string imiona[10];
    for (int i = 0; i < N; ++i)
        cin >> imiona[i];


    selcet_sort(imiona, N);

    for (int i = 0; i < N; ++i)
        cout << imiona[i] << ' ';

    return 0;
}