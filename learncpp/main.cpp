#include <iostream>
#include <vector>
#include "method.h"

using namespace std;


int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;
    auto result = twoSum(nums,target);
    if (result.size()<=0)
        cout<<"数组不存在两数之和为"<<target<<"的数；"<<endl;
    else
        cout<<"数组中两数之和为"<<target<<"的数的位置在"<<result[0]<<"-"<<
            result[1]<<endl;
    return 0;
}