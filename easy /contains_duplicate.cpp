class Solution {

public:
    bool containsDuplicate(vector<int>& nums) {
        // O(n^2) time | O(1) space
        // for(int i = 0; i < nums.size(); ++i) {
        //     for(int j = 0; j < nums.size(); ++j) {
        //         if(i != j && nums[i] == nums[j]) return true;
        //     }
        // }
        // return false;
        // O(n) time | O(n) space
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); ++i) {
            if(s.find(nums[i]) != s.end()) return true;
            else s.insert(nums[i]);
        }
        return false;
    }
};
