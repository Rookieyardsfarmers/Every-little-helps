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

bool isPalindrome(int x){
    if (x<0)
        return false;
    int y = x;
    long sum = 0; // 这里用long 是在测试的时候下方计算超出int范围 ，题目给定的范围是int值的范围
    while (y!=0){
        sum = sum*10+y%10;
        y/=10;
    }
    if (sum!=x)
        return false;
    return true;
}

int romanToInt(string s){
    unordered_map<char,int> map;
    map['I']=1;
    map['V']=5;
    map['X']=10;
    map['L']=50;
    map['C']=100;
    map['D']=500;
    map['M']=1000;
    int len = s.length();
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        int value = map[s[i]];
        if (i<len-1&&value<map[s[i+1]])
            sum -=value;
        else
            sum +=value;
    }
    return sum;
}