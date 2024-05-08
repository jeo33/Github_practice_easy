class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            for(int j=i+1;j<nums.size() &j<=i+k;j++){
                int second=nums[j];
                if(second==first)return true;
            }
        }
        return false;
        
    }
};



//better solution:Using map
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            if(m.find(n)!=m.end()& (abs(m[n]-i)<=k)){return true;}
            else{m[n]=i;}
        }
        return false;
    }
};