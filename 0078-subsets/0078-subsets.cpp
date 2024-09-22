void subset(vector<int>& nums, int n, vector<vector<int>>& ans, vector<int>& t, int i){
    if(i==n){
        ans.push_back(t);
        return ;
    }
    t.push_back(nums[i]);
    subset(nums,n,ans,t,i+1);
    t.pop_back();
    subset(nums,n,ans,t,i+1);
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t;
        int n=nums.size();
        subset(nums,n,ans,t,0);
        return ans;
    }
};
