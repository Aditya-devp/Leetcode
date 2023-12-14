class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
          int m = grid.size();
         int n = grid[0].size();
        
       
        vector<int> r1(m, 0);
        vector<int> c1(n, 0);
        vector<int> r0(m, 0);
        vector<int> c0(n, 0);
        
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    c0[j]++;
                    r0[i]++;
                }else{
                    c1[j]++;
                    r1[i]++;
                }
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                grid[i][j] = r1[i]+c1[j]-r0[i]-c0[j]; 
            }
        }
        return grid;
    }
};
