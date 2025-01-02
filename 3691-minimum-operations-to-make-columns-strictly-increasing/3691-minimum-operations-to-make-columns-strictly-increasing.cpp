class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        int previous_value;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(i==0) previous_value=grid[i][j];
                else{
                    if(previous_value >= grid[i][j]){
                        ans+=previous_value-grid[i][j]+1;
                        previous_value+=1;
                    }
                    else previous_value=grid[i][j];
                }
            }
        }
        return ans;
    }
};
