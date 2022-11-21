/*
    Date: 2020
    Author: Thien Linh
    Description:  
        (Count of profer factory below 1000000
        Answer Total = sum {Tau(i) : 1 <= i <= n}
        // 5E five examples
        // PF ? x = 1 2 3 4 5 ... 12 ... 20 ... 36
        //      u = 0 1 1 2 1 ... 5  ... 5  ... 6
        // Sum count u = (0 + 1 + 1 + 2 + 1 + ... +  6)
        // 12: 1 2 3 4 5 6 , Symmetry x = ab
        // By the way
        // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
        // Eratosthenes / -> x -> + -> -)
*/

#include <iostream>
#include <cmath>

using namespace std;

const int MN = 1000000;
int t[MN+1];

void AllTau(int lim) { // Calcutor all t[1...<x] 
    if(lim <= 1) return;
    for(int i=2; i < lim; i++) {
        t[i] = 1;
    }
    t[0] = t[1] = 0;
    int n2 = lim/2; // Thuc hien phep chia 1 lan
    for(int i=2; i< n2; i++) {
        for(int j = i+i; j < lim; j += i) {
            t[j]++;
        }
    }
} // Tau

void Show(int n) {
    for (int x = 1; x < n; x++)
        cout << "\n" << x << ": " << t[x];
} // Show

int Total(int n) {
    int d = 0;
    for (int x = 1; x < n; x++)
        d += t[x];
    return d;
} // Total

// Dong quy
int main() {
    int n = 30;
    AllTau(n);
    cout << Total(n);
    return 0;
} // Box
