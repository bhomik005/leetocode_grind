class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // O(n^2) time | O(1) space - not optimal
        // O(n) time | O(n) space
        unordered_map<int,int> prevNums;
        vector<int> res(2);
        for(int i = 0; i < nums.size(); ++i) {
            int potentialMatch = target - nums[i];
            auto itr = prevNums.find(potentialMatch);
            if(itr != prevNums.end()) {
                res = {itr->second, i};
                break;
            }
            else prevNums.insert(make_pair(nums[i], i));
        }
        return res;
    }
};
