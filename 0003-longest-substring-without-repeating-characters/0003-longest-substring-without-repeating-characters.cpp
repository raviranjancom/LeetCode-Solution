int check(string s, int a, int b,char ch){
    for(int i=a;i<=b;i++){
        if(ch==s[i]) return i;
    }
    return -1;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int ans=1,c=1;
        int a=0,b=0;
        set<int> st;
        st.insert(s[0]);
        for(int i=1;s[i]!='\0';i++){
            st.insert((int)s[i]);
            if(check(s, a, b, s[i])==-1){
                b++;
                if(b-a>ans) ans=b-a;
            }
            else{
                int k=check(s,a,b,s[i]);
                a=k+1;
                b++;
                if(b-a>ans) ans=b-a;
            }
        }
        if(st.size()==1) return 1;
        else ans++;
        return ans;
    }
};

