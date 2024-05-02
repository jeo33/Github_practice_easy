#include <cstdint>
#include<math.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int sum=0;
        for(int i=0;i<32;i++){
            sum+=(n&1)*pow(2,(31-i));
            n=n>>1;
        }
        return sum;
    }
};


int main(){
    Solution s;
    s.reverseBits(43261596);
}
