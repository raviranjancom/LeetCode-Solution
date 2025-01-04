class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend==-2147483648 && divisor==-1) return INT_MAX;
        if (dividend==-2147483648 && divisor==1) return INT_MIN;
        int sign;
        if((dividend<0 &&divisor<0) || (dividend>0 &&divisor>0)) sign=1;
        else sign=-1;
        long long n=abs((long long)dividend), d=abs((long long)divisor);
        long long r=0,x=0;
        while(d<=n){
            long long p=0;
            while(n>=(d<<(p+1))) p++;
            r+=1<<p;
            n-=(d<<p);
        }
        if(sign*r>=INT_MAX) return INT_MAX;
        if(sign*r<=INT_MIN) return INT_MIN;
        return (int)sign*r;
    }
};
