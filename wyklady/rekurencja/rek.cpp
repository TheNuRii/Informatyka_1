#include <iostream>
using namespace std;

// silnia
int Factorial (int n){
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

// Power
double Power(double x, int n){
    if (n==0)
        return 1;
    if (n % 2 ==0)
        return Power(x*x, n/2);
    else
        return x * Power(x*x, n/2);
}

// Algortym Euklidesa
int nwd(int x, int y){
    if(y == 0) return x;
    return nwd(y, x%y);
}

int main(){

    return 0;
}