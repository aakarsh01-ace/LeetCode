class Solution {
public:
    int First(vector<int>& nums, int target){
        int n = nums.size();
        int left = 0, right = n - 1;
        int result = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                result = mid;
                right = mid - 1;
            }else if(target > nums[mid]){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return result;
    }

    int Last(vector<int>& nums, int target){
        int n = nums.size();
        int left = 0, right = n - 1;
        int result = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                result = mid;
                left = mid + 1;
            }else if(target < nums[mid]){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int F = First(nums, target);
        int L = Last(nums, target);
        vector<int> resultant;
        resultant.push_back(F);
        resultant.push_back(L);
        return resultant;
    }
};