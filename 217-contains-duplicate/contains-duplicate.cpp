class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int> a;

        // for(int i=0; i<nums.size(); i++){
        //     if(a.find(nums[i])!=a.end()){
        //         return true;
        //     }
        //     a.insert(nums[i]);
        // }
        // return false;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()) return true;
            mp.insert({nums[i], i});
        }
        return false;
    }
};