class Solution {
public:
    int reverse(int x) {
        int r;
        int n=x;
        int rev=0;
        while (n!=0){
            r=n%10;
            if ((rev<(pow(2,31)-1)/10 && rev>(-1)*pow(2,31)/10)){
                rev=rev*10+r;
                n=n/10;
            }
            else return 0;
        }
    return rev;
    }
};
