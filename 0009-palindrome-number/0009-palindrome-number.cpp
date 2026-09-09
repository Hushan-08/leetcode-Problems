class Solution {
public:
    long long rev;
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        else {
            int temp = x;
            while (temp > 0) {
                int digit;
                digit = temp % 10;
                temp = temp / 10;

                rev = rev * 10 + digit;
            }
        }

        if (rev == x)
            return true;

        else
            return false;
    }
};