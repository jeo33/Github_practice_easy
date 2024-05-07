class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;

        for(auto x:nums){
            int len=s.size();
            s.insert(x);
            if(len==s.size())return true;
        }
        return false;
    }
};