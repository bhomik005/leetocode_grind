class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force solution 
        // O(n^2) time | O(1) space
        // for(int i = 0; i < nums.size() - 1; ++i) {
        //     for(int j = i + 1; j < nums.size(); ++j) {
        //         if(nums[i] + nums[j] == target) return {i, j};
        //     }
        // }
        // return {};

        // make use of hashmap data structure to solve this problem in O(n) time
        // O(n) time | O(n) space
        unordered_map<int,int> prevNums;
        for(int i = 0; i < nums.size(); ++i) {
            int potentialMatch = target - nums[i];
            if(prevNums.find(potentialMatch) != prevNums.end()) return {i, prevNums[potentialMatch]};
            else prevNums[nums[i]] = i;
        }
        return {};
        
    }
};
