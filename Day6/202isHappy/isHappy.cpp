class Solution {
public:

    int sum_digit(int n){
        int sum = 0;
        while (n != 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> sums;
        while (true){
            int sum = sum_digit(n);
            if (sum == 1) {
                return true;
            }
            if (sums.find(sum) != sums.end()){
                return false;
            }
            else{
                sums.insert(sum);
            }
            n = sum;
        }
    }
};