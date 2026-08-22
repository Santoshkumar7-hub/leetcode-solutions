class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                int lastdigit = num % 10;
                num = num / 10;
                sum += lastdigit;
            }
            num = sum;
        }
        return num;
    }
};