class Solution {
public:
    int countDigit(int n) {
        int count = 0 ;
        while ( n > 0 ){
            int lastDigit = n % 10;
            count = count + 1;
            n = n / 10;
        }
        return count;
    }
};