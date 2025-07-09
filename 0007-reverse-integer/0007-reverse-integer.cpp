class Solution {
public:
    int reverse(int num) {
        
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;

    }
};