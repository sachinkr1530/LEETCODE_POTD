class Solution {
public:
    bool isPowerOfFour(int n) {
        double result;
        if (n <= 0) {
            return false;
        } else {
            result = log(n) / log(4);
        }

        if (result == int(result)) {
            return true;
        } else {
            return false;
        }
    }
};