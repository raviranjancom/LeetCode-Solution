class stackf{
    public:
        int top;
        int size;
        char * ptr;
        stackf(int top,int size,char *ptr){
            this->top=top;
            this->size=size;
            this->ptr=ptr;
        }
        void pushf(char v){
            top++;
            ptr[top]=v;
        }
        void popf(){
            top--;
        }
        string fun(string ans){
            for(int i=0;i<=top;i++){
                ans.push_back(ptr[i]);
            }
            return ans;
        }
};
class Solution {
public:
    string clearDigits(string s) {
        int n=size(s);
        stackf st(-1,n,new char[n]);
        for(int i=0;i<n;i++){
            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
                st.popf();
            }
            else st.pushf(s[i]);
        }
        string ans;
        string r=st.fun(ans);
        return r;
    }
};