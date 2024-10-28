class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long result = 0;
        const long UPPER_LIMIT = 2147483647;  // INT_MAX for 32-bit
        const long LOWER_LIMIT = -2147483648; // INT_MIN for 32-bit

        // Step 1: Ignore leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Handle sign if present
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert digits and stop at non-digit character
        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Step 4: Check for overflow
            if (result > (UPPER_LIMIT - digit) / 10) {
                return (sign == 1) ? UPPER_LIMIT : LOWER_LIMIT;
            }

            result = result * 10 + digit;
            i++;
        }

        // Apply sign to result
        result *= sign;

        return static_cast<int>(result);
    }
};
