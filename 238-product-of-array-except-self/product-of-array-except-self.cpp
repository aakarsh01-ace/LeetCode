class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);

        // prefix array
        int prefix = 1;
        for(int i=0; i<nums.size(); i++){
            res[i] = prefix;
            prefix *= nums[i];
        }

        // postfix array
        int postfix = 1;
        for(int i=nums.size()-1; i<nums.size(); --i){
            res[i] *= postfix;
            postfix *= nums[i]; 
        }

        return res;
    }
};