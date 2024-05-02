#include <cstdint>
#include<math.h>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        for(int i=0;i<8*sizeof(int);i++){
            if(n&1==1)count++;
            n=n>>1;
        }
        return count;
    }
};


int main(){
    Solution s;
    s.hammingWeight(2147483645);
}
