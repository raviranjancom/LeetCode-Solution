class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        long long ans=INT_MAX;
        // for(int i=0;i<n;i++){
        //     nums[i]-=target;
        // }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                long long s=nums[i];
                s=s+nums[j]+nums[k];
                if(s>target) k--;
                else if(s<target) j++;
                else return s;
                if(abs(ans-target)>abs(s-target)) ans=s;
            }
        }
        if(ans>INT_MAX) ans=INT_MAX;
        if(ans<INT_MIN) ans=INT_MIN;
        return (int)ans;
    }
};
