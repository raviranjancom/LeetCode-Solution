void combination(vector<int> &candidates, vector<vector<int>> &ans, vector<int> &ds, int idx, int target){
    if(target==0){
        ans.push_back(ds);
        return ;
    }
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        ds.push_back(candidates[i]);
        combination(candidates, ans, ds, i+1, target-candidates[i]);
        ds.pop_back();
    }
}
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        combination(candidates, ans, ds, 0, target);
        return ans;
    }
};