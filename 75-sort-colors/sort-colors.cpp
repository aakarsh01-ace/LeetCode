class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;

        for(int i=0; i<n; i++){
            if(nums[i]==0) cnt_1++;
            else if(nums[i]==1) cnt_2++;
            else cnt_3++;
        }

        for(int i=0; i<cnt_1; i++){
            nums[i]=0;
        }
        for(int i=cnt_1; i<cnt_1+cnt_2; i++){
            nums[i]=1;
        }
        for(int i=cnt_1+cnt_2; i<n; i++){
            nums[i]=2;
        }
    }
};