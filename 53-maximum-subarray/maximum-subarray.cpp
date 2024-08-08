class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int maxx = nums[0];

        for(int n : nums){
            if(curr < 0){
                curr = 0;
            }
            curr += n;
            maxx = max(maxx, curr);
        }
        return maxx;
    }
};