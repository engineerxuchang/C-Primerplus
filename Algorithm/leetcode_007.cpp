//
// Created by 徐畅 on 2019/2/7.
//
#include <iostream>

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int i;
        int tmp;
        bool neg = false;

        if (x<0){
            x=-x;
            neg = true;
        }

        while(x != 0){
            i = x % 10;
            tmp = result;
            x = x/10;
//            result = result*10 + i;
            if(result > INT_MAX/10 || result < INT_MIN/10){
                return 0;
            }
            if(result / 10 != tmp){
                return 0;
            }
            result = result*10 + i;
        }
        if (neg){
            result = -result;
        }
        return result;
    }
};

int main(){
    Solution *s = new Solution();
    int out;
    out = s->reverse(-2147483648);
    printf("%d",out);

}