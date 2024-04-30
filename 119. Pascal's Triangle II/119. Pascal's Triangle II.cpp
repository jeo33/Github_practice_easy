#include<vector>
using namespace std;
class Solution {
public:
     vector<int> getRow(int rowIndex) {
        vector<int> *temp=new vector<int>{1};
        if (rowIndex==0) {
            return *temp;
        }
        else{
                gen(rowIndex,temp);
                return *temp;
        }
    }
    void gen(int rows,vector<int> *last){
        if(last->size()<=rows){
            last->push_back(1);
            int a=last->at(0);
            int b=last->at(1);
            int c=0;
            for(int i=1;i<last->size()-1;i++){
                c=last->at(i+1);
                last->at(i)=a+b;
                a=b;
                b=c;
            }
            gen(rows,last);
        }
    }
};