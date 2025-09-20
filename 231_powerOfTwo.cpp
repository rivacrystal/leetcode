class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1) {
            return 0;
        }

// deep dividing by two until we reach one; if we can, then it's a power of two.
        while (n > 1) {
            if (n % 2) {
                return 0;
            }
            n /= 2;
        }

        return 1;
    }
};
