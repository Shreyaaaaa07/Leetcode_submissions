class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMax = 0 , maxSum = INT_MIN;
        int currMin = 0 , minSum= INT_MAX;

        for (int val : nums){
            currMax += val;
            maxSum = max(currMax , maxSum);

            if(currMax < 0){
                currMax = 0;
            }
            currMin += val;
            minSum = min(currMin, minSum);

            if(currMin > 0){
                currMin = 0;
            }



        }
        return max(maxSum, abs(minSum));
    }
};