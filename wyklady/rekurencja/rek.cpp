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

// wierza
void move(int n, char from, char to, char aux){
    static int counter = 0;
    if (n == 1){
        cout << "Move the top disk form" << from << "to" << to << endl;
        counter ++;
        cout << "Move nr" << counter << endl;
    } else {
        move(n - 1, from, aux, to);
        move(1, from, to, aux);
        move(n - 1, aux, to, from);

    }
}

// Droga skoczka szachowego
bool jump(int Board[][5], const int board_size, int Jump[][2], int x, int y, int step){
    int visited = -1, u, v;
    bool ok = false;
    int squares = board_size * board_size;

    do {
        visited ++;

        u = x + Jump[visited][0];
        v = y + Jump[visited][1];

        if (u >= 0 && u < board_size && v >= 0 && v < board_size && Board[u][v] == 0){
            Board[u][v] = step;
            if (step < squares && !jump(Board, board_size, Jump, u, v, step + 1))
                Board[u][v] = 0;
            else
                ok = true;
        }
    } while (!ok && visited < 7);

    return ok;
}

int main(){

    return 0;
}