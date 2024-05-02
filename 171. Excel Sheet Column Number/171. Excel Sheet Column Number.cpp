class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0;
        if(columnTitle.size()==1)return int(columnTitle[0]-64);
        for(int i=columnTitle.size()-1;i>=0;i--){
            int temp=int(columnTitle[i])-64;
            sum+=temp*int(pow(26,columnTitle.size()-1-i));
        }
        return sum;
    }
};