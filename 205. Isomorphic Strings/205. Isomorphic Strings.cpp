#include<unordered_set>
#include<string>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return helper(s)==helper(t);
    }
    string helper(string s){
        unordered_set<char> temp;
        for(auto c:s){
            if(temp.find(c)!=temp.end()){
                continue;
            }
            temp.insert(c);
        }
        int counter=0;
        string returns;
        for(auto c:temp){
            for(int i=0;i<s.size();i++){
                if(s[i]==c)returns+=char(counter);
            }
            counter++;
        }
        return returns;
    }
};

int main(){
    Solution s;
    string s1="qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
    string s2="',.pyfgcrl/=aoeuidhtns-\\;qjkxbmwvz";
    s.isIsomorphic()
}