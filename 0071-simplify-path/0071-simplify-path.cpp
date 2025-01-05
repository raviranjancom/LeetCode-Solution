class Solution {
public:
    string simplifyPath(string path) {
        path+="/";
        stack<string> ds;
        int i=0;
        int n=path.size();
        while(i<n){
            while(path[i]=='/'){
                i++;
            }

            string current;
            while(path[i]!='/' && i<n){
                current.push_back(path[i]);
                i++;
            }
            ds.push(current);
            if(!ds.empty() && ds.top()==".."){
                if (!ds.empty()) ds.pop();
                if (!ds.empty()) ds.pop();
            }
            if(!ds.empty() && ds.top()==".") if (!ds.empty()) ds.pop();
        }

        string ans;
        while(!ds.empty()){
            string x=ds.top();
            ans="/"+x+ans;
            ds.pop();
        }
        if(ans.back()=='/') ans.pop_back();
        return ans.empty() ? "/" : ans;
    }
};
