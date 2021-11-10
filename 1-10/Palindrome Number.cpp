class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long int curr = 0;
        int temp = x;
        do {
            curr *= 10;
            curr += temp % 10;
            temp /= 10;
        } while (temp > 0);
        if (curr == x) {
            return true;
        } else {
            return false;
        }
    }
};
