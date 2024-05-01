#include<vector>
#include<string>
#include<iostream>
#include<queue>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        vector<char> temp;
        for(auto c:s){
            if((toupper(c)<=90 &toupper(c)>=65)|(int(c)>=48 &57>=int(c))){
                temp.push_back(toupper(c));
            }
        }
        if(temp.empty())return true;
        if(temp.size()==1)return true;
        int l=0;
        int r=temp.size()-1;
        int mid=temp.size()/2;
        while(l<mid){
            if(temp[l]==temp[r]){
                l++;
                r--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};


int main(){
    Solution i=Solution();
    string temp="0P";
    cout<<i.isPalindrome(temp)<<endl;

}
