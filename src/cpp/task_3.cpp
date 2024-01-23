/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Problem3 {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        int n = s.length();

        vector<bool> dp(n + 1, false);
        dp[0] = true;  

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                    dp[i] = true;
                    break;  
                }
            }
        }

        return dp[n];
    }
};