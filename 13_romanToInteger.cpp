class Solution {
private:
    int charToDigit(char c) {
        switch(c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }

public:
    int romanToInt(string s) {
        int result = 0, prev = 0;

        // loop start at end of roman numeral and work backward
        for (int i = s.length() - 1; i >= 0; i--) {
            int current = charToDigit(s[i]);
            // if current is greater than the previous digit, then subtract current from the result, otherwise add current
            result += (current < prev) ? -current : current;
            // prev now becomes current, so we can check if V > I or somesuch
            prev = current;
        }

        return result;
    }
};
