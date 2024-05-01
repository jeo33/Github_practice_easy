#include<vector>
#include<string>
#include<iostream>
#include<queue>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int num=0;
        for(auto s:nums){
            num^=s;
        }
        return num;
    }
};



