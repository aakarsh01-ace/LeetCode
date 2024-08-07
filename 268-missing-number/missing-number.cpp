class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int sum_1 = (N*(N+1))/2;
        int sum_2 = 0;

        for(int i=0; i<N; i++){
            sum_2 += nums[i];
        }
        return (sum_1-sum_2);
    }
};