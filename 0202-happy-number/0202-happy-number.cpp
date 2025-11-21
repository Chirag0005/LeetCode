class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 &&n!=4){
            int final=0;
        while(n>0){
            int digit = n%10;
            final = final+digit*digit;
            n/=10;
            }
            n=final;
    }
    return n==1;
}};