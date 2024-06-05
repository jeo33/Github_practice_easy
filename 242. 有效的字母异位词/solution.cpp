class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> temp1(26,0);
        vector<int> temp2(26,0);
        if(s.size()!=t.size())return false;
        helper(temp1,s);
        helper(temp2,t);
        for(int i=0;i<26;i++){
            if(temp1[i]!=temp2[i])return false;
        }
        return true;
    }
    void helper(vector<int> &temp,string s){
        for(char c:s){
           temp[int(toupper(c))-65]++;
        }
    }
};
