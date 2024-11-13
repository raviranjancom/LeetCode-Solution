class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int a=0,b=n-1,mid;
        while(a<b){
            
            if(numbers[a] + numbers[b]==target) return {a+1,b+1};
            else if(numbers[b] + numbers[a] > target) b=b-1;
            else a=a+1;
        }
        return {-1,-1};
    }
};
