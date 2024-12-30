class Solution {
public:
    int countBit(int n){
        int ans=0;
        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0) ans++;
        }
        return ans;
    }
    int minBitFlips(int start, int goal) {
        int t=start^goal;
        return countBit(t);
    }
};