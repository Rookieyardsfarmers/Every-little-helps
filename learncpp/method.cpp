#include <vector>
#include <unordered_map>
#include "method.h"

using namespace std;


vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
        auto ir = map.find(target - nums[i]);
        if (ir != map.end())
            return {ir->second, i};
        map[nums[i]] = i;

    }
    return {};
}