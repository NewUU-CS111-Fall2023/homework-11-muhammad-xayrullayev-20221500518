/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <cmath>

using namespace std;

class Problem8 {
public:    
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int modInverse(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;  
}

void generateED(int p, int q, int& e, int& d) {
    int n = p * q;
    int phiN = (p - 1) * (q - 1);

    for (e = 2; e < phiN; e++) {
        if (gcd(e, phiN) == 1) {
            break;
        }
    }

    d = modInverse(e, phiN);
}
};