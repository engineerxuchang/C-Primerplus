//
// Created by 徐畅 on 2019/2/4.
//

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out(2);
        for(int i=0; i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]==target){
                    out[0] = i;
                    out[1] = j;
                    break;
                }
            }
        }
        return out;
    }
};

int main(){
    vector<int> nums;
    nums = {3,3};
    vector<int> out(2);
    int target = 6;

    Solution* sum= new Solution();
    out = sum->twoSum(nums, target);
    printf("vector = [%d, %d]",out[0], out[1]);

}