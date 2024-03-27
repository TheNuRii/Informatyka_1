#include <iostream>
using namespace std;


int main(){
    // Reprezentacja w systemie 16
    int maska = 0x10;
    // w systemie dziesiętnym wartość 16
    // Reprezentacja w systemie 8
    int mask = 010;
    // w systemie dziesi

    {
        // Sito Eastotrnesa
        int range;
        cin >> range;
        unsigned int sieve = 0xFFFFFFFC; // 0 -> nie jest liczbą pierwszą
        int prime = 2;
        while (prime * prime <= range){
            for (int multiple = 2 * prime; multiple <= range; multiple += prime)
                sieve &= ~(1 << multiple);

            do{         // znajdz kolejna liczbe pierwsza
                prime ++;
            }   while ( !(sieve & (1 << prime)) );
        }
        for (int i = 0; i < 32; i++)
            if (sieve & (1 << i)) cout << i << " ";

    }
    return 0;
}