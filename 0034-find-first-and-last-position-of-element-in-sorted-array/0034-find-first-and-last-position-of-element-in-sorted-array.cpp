class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int a=-1,b=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if (a==-1) a=i;
                b=i;
            }
        }
        if(a!=-1) return {a,b};
        else return {-1,-1};
    }
};