class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        int ones=0;
        for(int i=0;i<32;i++){
            ones+=n&1;
            n=n>>1;
        }
        return ones==1;
    }
};