#include <iostream>
using namespace std;

template <typename T>
void zamien(T& a,T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T1, typename T2>
void print(T1 a, T2 b[], const int size){
    cout << a << endl;

    for (int i = 0; i < size; ++i)
      cout << b[i] << "\t";
}

int main(){
    int a = 1, b = 2;
    // Używamy polskiego nazewnistwa funkcji by nie nadpisywać funkcji wbudowanej swap
    zamien(a, b);
    cout << a << b;
    return 0;
}