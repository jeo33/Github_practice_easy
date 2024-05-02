#include <cstdint>
#include<math.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        while(n>10){
        n=helper(n);
        }
        if(n==1|n==7|n==10)return true;
        else return false;
    }

    int helper(int n){
        int sum=0;
        do{
            sum+=pow(n%10,2);
            n/=10;
        }while(n>0);
        return sum;
    }
    
};

int main(){
    Solution s;
    s.isHappy(19);
}
