void permutation(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int hash[]){
    if(nums.size()==ds.size()){
        ans.push_back(ds);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(!hash[i]){
            ds.push_back(nums[i]);
            hash[i]=1;
            permutation(nums, ans, ds, hash);
            ds.pop_back();
            hash[i]=0;
        }
    }
}
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<vector<int>> result;
        vector<int> ds;
        set<vector<int>> st;
        int hash[nums.size()];
        for(int i=0;i<nums.size();i++){
            hash[i]=0;
        }
        permutation(nums, ans, ds, hash);
        for(auto it : ans){
            st.insert(it);
        }

        for(auto j : st){
            result.push_back(j);
        }
        return result;
    }
};