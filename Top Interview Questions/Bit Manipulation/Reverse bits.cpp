class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int a = 0;
    for(int i=0;i<32;i++){
        a<<=1;
        int k = n&1;
        n>>=1;
        a|=k;
    }
    return a;
    }
};
