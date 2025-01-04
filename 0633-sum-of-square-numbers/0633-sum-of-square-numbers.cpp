class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low=0,high=sqrt(c);
        
        while(low<=high){
            long long n=low*low + high*high; 
            if(n==c) return true;
            else if(n<c) low++;
            else high--;
        }
        return false;
    }
};
