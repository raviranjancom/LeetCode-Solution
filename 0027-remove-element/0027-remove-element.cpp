class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]==val){
                nums[i]=100;
                k++;
            }
        }
        sort(nums.begin(),nums.end());
        return size(nums)-k;
    }
};