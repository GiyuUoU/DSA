class Solution {
public:
    double myPow(double x, long long n) {
        // If power is negative, work with positive power and invert result later
        long long power = n;
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double result = 1.0;

        // Fast exponentiation
        while (power > 0) {
            if (power % 2 == 1) {   // if odd
                result *= x;
            }
            x *= x;                 // square the base
            power /= 2;             // reduce the power
        }

        return result;
    }
};
