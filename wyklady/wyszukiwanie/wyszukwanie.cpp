#include <iostream>
using namespace std;

bool search(double value, double data[], int size){
    for (int i = 0; i < size; ++i){
        if (data[i] == value){
            cout << "Wartość jest " << i;
            return true;
        }
    }
    return false;
}

bool bin_search(double value, double data[], int size) {
    int begin = 0;
    int end = size - 1;
    while (begin <= end) {
        int middle = (begin + end) / 2;
        if (data[middle] == value) {
            cout << "Wartość znaleźniona na pozycji " << middle << endl;
            return true;
        }

        if (data[middle] > value)
            end = middle - 1;
        else
            begin = middle + 1;
    }
    return false;
}

int main(){
    return 0;
}

