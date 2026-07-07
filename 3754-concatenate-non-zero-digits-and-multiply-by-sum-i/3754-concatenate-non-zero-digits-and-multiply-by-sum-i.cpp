class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> digits;

        while (n != 0) {
            int rem = n % 10;
            if (rem != 0)
                digits.push_back(rem);
            n /= 10;
        }

        long long sum = 0, x = 0;

        for (int i = digits.size() - 1; i >= 0; i--) {
            x = x * 10 + digits[i];
            sum += digits[i];
        }

        return x * sum;
    }
};