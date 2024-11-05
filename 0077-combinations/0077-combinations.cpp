void fun(int n, vector<vector<int>> &ans, vector<int> &ds, int k, int i){
    if(ds.size()==k){
        ans.push_back(ds);
        return ;
    }
    for(int j=i;j<=n;j++){
        ds.push_back(j);
        fun(n, ans, ds, k, j+1);
        ds.pop_back();
    }
}
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        fun(n, ans, ds, k, 1);
        return ans;
    }
};
