#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    Solution(){};
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp={1};
        if (numRows==1) {
            ans.push_back(temp);
            return ans;
        }
        else{
            ans.push_back(temp);
            generate_row(numRows,temp,&ans);
            return ans;
        }
    }
    void generate_row(int numRows,vector<int> last_row,vector<vector<int>> *ans){
        if(last_row.size()<numRows){
            vector<int> temp(last_row.size()+1);
            temp.at(0)=1;
            temp.at(last_row.size())=1;
            for(int i=1;i<last_row.size();i++){
                temp.at(i)=last_row.at(i-1)+last_row.at(i);
            }
            ans->push_back(temp);
            generate_row(numRows,temp,ans);
        }
        else return;
    }
};


int main()
{
    Solution a=Solution();
    vector<vector<int>> ans=a.generate(5);
    for(auto s:ans){
        cout<<endl;
        for(auto i:s){
            cout<<i<<" ";
        }
    }
}