/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <cmath>

using namespace std;

class Problem6 {
public:    
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void generateTwoPrimesGreaterThanN(int n, int& prime1, int& prime2) {
    if (n < 2) {
        n = 2;
    }

    for (int i = n + 1; ; ++i) {
        if (isPrime(i)) {
            prime1 = i;
            break;
        }
    }

    for (int i = prime1 + 1; ; ++i) {
        if (isPrime(i)) {
            prime2 = i;
            break;
        }
    }
}
};