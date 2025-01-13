class Solution {
public:
    int minimumLength(string s) {
        int n=s.length(),ans=0;
        map<int, int> count;
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            int y=count[i];
            while(y>2){
                int x=y/3;
                x*=2;
                y=y-x;
                ans+=x;
            }
        }
        return n-ans;
    }
};
