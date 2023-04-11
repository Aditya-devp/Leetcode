class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<32;i++){
          int a=n%2;
          if(a==1)
              count++;
          n/=2;
        }
        return count;
    }
};
