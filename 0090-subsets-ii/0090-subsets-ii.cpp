void subset2(vector<vector<int>> &ans,vector<int> &nums,vector<int> &v,int idx){
    ans.push_back(v);
    for(int i=idx;i<nums.size();i++){
        if(i!=idx && nums[i]==nums[i-1]) continue;
        v.push_back(nums[i]);
        subset2(ans,nums,v,i+1);
        v.pop_back();
    }
}
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        subset2(ans,nums,v,0);
        return ans;
    }
};
