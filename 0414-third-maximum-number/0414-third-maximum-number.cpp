class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<int> st(nums.begin(),nums.end());
        vector<int> ans(st.begin(), st.end());
        if(ans.size()==1) return ans[0];
        else if(ans.size()==2) return ans[1];
        else return ans[ans.size() - 3];
    }
};