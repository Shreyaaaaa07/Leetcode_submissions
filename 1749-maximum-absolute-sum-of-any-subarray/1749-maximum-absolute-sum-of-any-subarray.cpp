class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding = nums[0], minEnding = nums [0];
        int maxSum = nums[0] , minSum= nums[0];

        for (int i =1 ; i <nums.size(); i++){
            maxEnding = max(nums[i], maxEnding + nums[i]);
            maxSum = max(maxEnding , maxSum);

            minEnding = min(nums[i], minEnding + nums[i]);
            minSum = min(minEnding , minSum);
        }

        return max(maxSum , abs(minSum));
        
    }
};