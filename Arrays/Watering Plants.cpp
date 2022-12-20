class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=0,c=capacity;
        for(int i=0;i<plants.size();i++){
            if(c>=plants[i])
                ans++;  
            else{
                ans+=i; 
                ans+=i+1; 
                c=capacity;
            }
             c=c-plants[i]; 
        }
        return ans;
    }
};
