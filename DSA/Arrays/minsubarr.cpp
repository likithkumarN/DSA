class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = INT_MIN; //int Max = INT_MIN;: Initialize Max to the smallest possible integer value. This variable will keep track of the maximum subarray sum found so far
        int sum = 0; //int sum = 0;: Initialize sum to 0. This variable will accumulate the sum of the current subarray.

        for (int i = 0; i < nums.size(); i++) {    //for (int i = 0; i < nums.size(); i++) { ... }: Loop through each element of the array nums.
            sum = sum + nums[i];            //Add the current element nums[i] to the sum.
            if (sum > Max) {          //If the current sum is greater than Max, update Max to be the current sum.

                Max = sum;
            }
            if (sum < 0) {   //if (sum < 0) { sum = 0; }: If the current sum becomes negative, reset it to 0. This step is crucial as a negative sum would reduce the sum of any future subarray, so starting fresh with a sum of 0 is beneficial.

                sum = 0;
            }
        }
        return Max;   //fter the loop ends, return Max, which contains the maximum subarray sum.
    }
};
    /*Initialize Max = INT_MIN and sum = 0.
Iterate through the array:
i = 0: sum = -2 → Max = -2 (updated from INT_MIN).
i = 1: sum = -2 + 1 = -1 → Max = -1 (updated from -2).
i = 2: sum = -1 + (-3) = -4 → sum < 0 so sum = 0.
i = 3: sum = 0 + 4 = 4 → Max = 4 (updated from -1).
i = 4: sum = 4 + (-1) = 3 → Max = 4 (no update needed).
i = 5: sum = 3 + 2 = 5 → Max = 5 (updated from 4).
i = 6: sum = 5 + 1 = 6 → Max = 6 (updated from 5).
i = 7: sum = 6 + (-5) = 1 → Max = 6 (no update needed).
i = 8: sum = 1 + 4 = 5 → Max = 6 (no update needed).
The maximum subarray sum is 6, which corresponds to the subarray [4, -1, 2, 1].*/
