class Solution {
public:
    int maxScore(string s) {
        int max=INT_MIN,ans=INT_MIN;
        int n=s.size();
        int zero=0,one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        int a=0,b=0;
        for(int j=1;j<n;j++){
            if(s[j-1]=='1') a++;
            else b++;
            ans= b+(one-a);
            max<ans ? max=ans : max=max;
        }

        return max;
    }
};
