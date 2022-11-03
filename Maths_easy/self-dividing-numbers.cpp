class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
           int num=i;//for storing the original num
            int flag=0;// for marking the numbers that are self dividing
            while(num){
                int dig=num%10;
                if(dig!=0&&i%dig==0){
                    flag=1; // here if number divides itself and not 0 so mark as true
                }
                else{
                    flag=0;
                    break;
                }
                num=num/10; // to break the number in single parts 
            }
            if(flag==1){
                v.push_back(i);
            }
        }
        return v;
    }
};
