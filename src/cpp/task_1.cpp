/*
 * Author:Muhammad Xayrullayev
 * Date:23.01.2024
 * Name:Muhammad Xayrullayev
 */

#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Problem1 {
public:
    int answer(vector<int>& nums, int target) {
        unordered_map<string, int> memo;
        return countWays(nums, target, 0, memo);
    }
private:
    int countWays(std::vector<int>& nums, int index, int target, std::unordered_map<std::string, int>& memo) {
        if (index == nums.size()) {
            return (target == 0) ? 1 : 0;
        }
        string key = to_string(index) + "-" + to_string(target);
            if (memo.find(key) != memo.end()) {
                return memo[key];
            }

        int waysWithPlus = countWays(nums, index + 1, target - nums[index], memo);
        int waysWithMinus = countWays(nums, index + 1, target + nums[index], memo);

        memo[key] = waysWithPlus + waysWithMinus;

        return memo[key];
    }
};