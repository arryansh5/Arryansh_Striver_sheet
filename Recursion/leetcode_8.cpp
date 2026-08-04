class Solution {
public:
    int converter(const string &s, int i, long long num, int sign) {
        if (i >= s.size() || !isdigit(s[i])) {
            long long ans = sign * num;
            if (ans > INT_MAX) return INT_MAX;
            if (ans < INT_MIN) return INT_MIN;
            return (int)ans;
        }

        int digit = s[i] - '0';

        // Check overflow before updating num
        if (sign == 1) {
            if (num > (INT_MAX - digit) / 10)
                return INT_MAX;
        } else {
            if (num > ((long long)INT_MAX + 1 - digit) / 10)
                return INT_MIN;
        }

        num = num * 10 + digit;

        return converter(s, i + 1, num, sign);
    }

    int my_r_app(string s, int i = 0) {
        while (i < s.size() && s[i] == ' ')
            i++;

        int sign = 1;

        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        return converter(s, i, 0, sign);
    }

    int myAtoi(string s) {
        return my_r_app(s);
    }
};