class Solution {
public:
    int reverse(int x) {
        int curr = 0;
        long int temp = abs(x);
        do {
            if (curr > INT_MAX / 10) {
                return 0;
            }
            curr *= 10;
            curr += temp % 10;
            temp /= 10;
        } while (temp > 0);
        return (x < 0) ? -curr : curr;
    }
};
