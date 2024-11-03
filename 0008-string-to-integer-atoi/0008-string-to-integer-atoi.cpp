class Solution {
public:
    int myAtoi(string s) {
        int ans=0,sign=1,i=0;
        bool flag=true,begin=false;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(i<s.length() && (s[i]=='-' || s[i]=='+')){
            s[i]=='-'?sign=-1:sign=1;
            i++;
        }

        while(i<s.length() && flag==true){
            int n=(int)s[i]-48;
            if(-1 < n && n < 10){
                begin=true;
                if((INT_MAX-n)/10 < ans){
                    if(sign==-1) return INT_MIN;
                    else return INT_MAX;
                }
                ans*=10;
                ans+=n;
            }
            else flag=false;
            i++;
        }
        return sign*ans;
    }
};
