class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max=0,t=0;
        int a=0,b=n-1;
        while(a<=b){
            int min;
            if(height[a]<height[b]){
                min=height[a];
                t=min*(b-a);
                if(t>max) max=t;
                a++;
            }
            else{
                min=height[b];
                t=min*(b-a);
                if(t>max) max=t;
                b--;
            }
        }
        return max;
    }
};