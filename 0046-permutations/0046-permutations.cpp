void permutation(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int fre[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(!fre[i]){
            ds.push_back(nums[i]);
            fre[i]=1;
            permutation(nums, ans, ds, fre);
            ds.pop_back();
            fre[i]=0;
        }
    }
}
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=nums.size();
        int fre[n];
        for(int i=0;i<nums.size();i++){
            fre[i]=0;
        }
        permutation(nums, ans, ds, fre);
        return ans;
    }
};
