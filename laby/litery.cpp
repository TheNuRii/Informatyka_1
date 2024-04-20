#include <iostream>
using namespace std;

int main(){
    string slowo;
    cin >> slowo;
    unsigned int mask = 0x00000020;
    for (int i = 0; i < slowo.length(); ++i)
        if ((int(slowo[i]) >= 65 && int(slowo[i]) <= 90) || (int(slowo[i]) >= 97 && int(slowo[i]) <= 122))
            slowo[i] = slowo[i] ^ mask;
    cout << slowo;
    return 0;
}