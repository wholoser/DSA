class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlenWindow = INT_MAX;
        int currentsum = 0;

        //start two pointer sliding window
        int low = 0;
        int high = 0;

        while (high<nums.size()){
            //find currentsum and increase window size
            currentsum += nums[high];
            high++;

            //try to reduce the window size
            while(currentsum >= target){
                int len = high - low;

                //update minimum length of window
                minlenWindow = min(minlenWindow, len);
                currentsum -= nums[low];
                low++;
            }
        }
        return minlenWindow == INT_MAX ? 0 : minlenWindow;

    }
};