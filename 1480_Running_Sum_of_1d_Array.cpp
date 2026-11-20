/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int>result;

        for (std::size_t i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }
};
