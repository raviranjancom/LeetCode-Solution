class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0,max=0;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            if(nums[i]+1==nums[i+1]){
                ans++;
                if(max<ans) max=ans;
            }
            else ans=0;
        }
        return max+1;
    }
};
// -1 -1 0 1 3 4 5 6 7 8 9 