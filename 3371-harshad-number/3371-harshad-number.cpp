class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int y=x;
        int n=0;
        while(y>0){
            n=n+y%10;
            y=y/10;
        }
        if(x%n==0) return n;
        else return -1;
    }
};
