/* Given an integer x, return true if x is a , and false otherwise. */


class Solution {
public:
    bool isPalindrome(int x) {
        // check if it's negative number, which is not a palindrome
        if (x < 0) {
            return false;
        }

        int reverseNum = 0; // variable for reversed version of number
        int num = x; // keep original form of number to check later

        // loop to go along number
        while (x > 0) {
            // extract final digit from number
            // e.g. 124 % 10 = 4
            int digit = x % 10;

            // overflow check
            if (reverseNum > (INT_MAX - digit) / 10) {
                return false;
            }

            // add digit to reversed number
            // e.g. 42 * 10 + 1 = 421
            reverseNum = reverseNum * 10 + digit;
            x = x / 10;
        }

        // check if reversed number is equal to original
        // e.g. 124 != 421
        return reverseNum == num;
    }
};
