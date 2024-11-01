class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows==1) return ans;
        for(int i=2;i<=numRows;i++){
            vector<int> ds;
            ds.push_back(1);
            for(int j=0;j<ans[i-2].size()-1;j++){
                ds.push_back(ans[i-2][j+1]+ans[i-2][j]);
            }
            ds.push_back(1);
            ans.push_back(ds);
        }
        return ans;
    }
};
