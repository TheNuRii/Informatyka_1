#include <iostream>
using namespace std;

template <typename T>
void swap(T &a, T &b){
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
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}