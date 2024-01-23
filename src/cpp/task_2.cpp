/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Problem2 {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        if (totalSum % 2 != 0) {
            return false;
        }

        int targetSum = totalSum / 2;
        int n = nums.size();

        vector<vector<bool>> dp(n + 1, vector<bool>(targetSum + 1, false));

        for (int i = 0; i <= n; ++i) {
            dp[i][0] = true;
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= targetSum; ++j) {
                if (nums[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }

        return dp[n][targetSum];
    }
};
