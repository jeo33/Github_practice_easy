#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        queue<int> q;
        if(nums.size()==0)return ans;
        for(int current=0;current<nums.size();current++){
            if(q.empty()){
                q.push(nums[current]);
            }
            else if(nums[current]!=q.back()+1){
                string s=q.size()==1?to_string(q.front()):to_string(q.front())+"->"+to_string(q.back());
                ans.push_back(s);
                while(!q.empty())q.pop();
                q.push(nums[current]);
            }
            else if(nums[current]==q.back()+1){
                q.push(nums[current]);
            }
        }
        if(!q.empty()){
            string s=q.size()==1?to_string(q.front()):to_string(q.front())+"->"+to_string(q.back());
            ans.push_back(s);
        }
        return ans;
    }
};