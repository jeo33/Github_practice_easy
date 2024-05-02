#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int current=nums[0];
        int max=0;
        int frquency=0;
        int current_f=0;
        for(auto s:nums){
            if(s==current)current_f++;
            else{
                current=s;
                current_f=1;
            }
            if(current_f>frquency){
                frquency=current_f;
                max=s;
            }
        }
        return max;
    }
};



//solution 2:
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int count=0;
        int current=0;
        for(int i=0;i<nums.size();i++){
            if(count==0)current=nums[i];
            if(nums[i]==current)count++;
            else count--;
        }
        return current;
    }
};