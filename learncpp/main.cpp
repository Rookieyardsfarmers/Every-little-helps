#include <iostream>
#include <vector>
#include "method.h"

using namespace std;


int main(){

#pragma region //两数之和
    vector<int> nums = {2,7,11,15};
    int target = 9;
    auto result = twoSum(nums,target);
    if (result.size()<=0)
        cout<<"数组不存在两数之和为"<<target<<"的数；"<<endl;
    else
        cout<<"数组中两数之和为"<<target<<"的数的位置在"<<result[0]<<"-"<<
            result[1]<<endl;
#pragma endregion
#pragma region //回文数
    int x= 121;
    cout<<isPalindrome(x)<<endl;
#pragma endregion
#pragma region //罗马数字转阿拉伯数组
    string s = "VI";
    int num = romanToInt(s);
    cout<<num<<endl;
    return 0;
#pragma endregion
}