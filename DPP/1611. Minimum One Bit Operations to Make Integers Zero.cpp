class Solution {
public:
    int minimumOneBitOperations(int n) {
         if (n == 0) return 0;

        long long mask = 1, bits = 0;
        
        while (mask <= n)
        {
            mask <<= 1;
            bits++;
        }
        
        mask >>= 1;
        
        return pow(2, bits) - 1 - minimumOneBitOperations(n - mask);
    }
};
