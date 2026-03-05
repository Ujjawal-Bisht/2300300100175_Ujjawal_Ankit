/* Time Complexity - O(d^2) where d- no. of digits in num.
   Space Complexity - O(1)

  But, this code is not optimized there exist another solution which has TC - O(1) and SC - O(1) */

class Solution {
public:
    int addDigits(int num) {
        if (num < 9) return num ;
        int sum = 0;
        while(num>0){
            sum += num % 10 ;
            num /= 10 ;
            if(num == 0 && sum > 9){
                num = sum;
                sum = 0;
            }
        }
        return sum ;
    }
};

