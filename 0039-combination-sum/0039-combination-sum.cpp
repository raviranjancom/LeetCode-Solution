void fun(vector<int> &cand, vector<vector<int>> &ans, vector<int> &ds, int target, int i){
    if(i>=cand.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return ;
    }
    if(cand[i]<=target){
        ds.push_back(cand[i]);
        fun(cand, ans, ds, target-cand[i], i);
        ds.pop_back();
    }
    fun(cand, ans, ds, target, i+1);
}
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        fun(candidates, ans, ds, target, 0);
        return ans;
    }
};
