/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <vector>

using namespace std;

class Problem4 {
public:
    int superPow(int a, vector<int>& b) {
        const int base = 1337;
        int result = 1;

        for (int i : b) {
            result = (pow(result, 10) * pow(a, i)) % base;
        }

        return result;
    }

private:
    int pow(int x, int n) {
        const int base = 1337;
        if (n == 0) return 1;
        x %= base;

        int result = 1;
        for (int i = 0; i < n; ++i) {
            result = (result * x) % base;
        }

        return result;
    }
};
