class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int c=0;
        for(int i=n-1;i>=0;i--){
            if (s[i]==' ' && c>0) break;
            else if(s[i]==' ' && c==0) continue;
            else c++;
        }
        return c;
    }
};