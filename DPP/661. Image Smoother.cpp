class Solution {
public:
    int dx[8]={1,-1,0,0,-1,1,-1,1};
    int dy[8]={0,0,1,-1,1,1,-1,-1};
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>>ans=img;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=img[i][j];
                int count=1;
                for(int k=0;k<8;k++){
                  
                        int nx=i+dx[k];
                        int ny=j+dy[k];
                    if(nx>=0 and ny>=0 and nx<m and ny<n){
                        sum+=img[nx][ny];
                        count++;
                    }
                    
                }
                ans[i][j]=sum/count;
                
            }
        }
        return ans;
    }
};
