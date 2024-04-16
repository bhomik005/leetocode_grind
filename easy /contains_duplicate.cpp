class Solution {

public:
    bool containsDuplicate(vector<int>& nums) {
        // // O(n^2) time | O(1) space
        // bool duplicate = false;
        // for(int i = 0; i < nums.size() - 1; ++i) {
        //     for(int j = i + 1; j < nums.size(); ++j) {
        //         if(nums[i] == nums[j]) {
        //             duplicate = true;
        //             return duplicate;
        //         }
        //     }
        // }
        // return duplicate;

        // O(n) time | O(n) space
        // hashmap or dictionary to store the frequency of the elements
        // iterate over the hashmap and return ture if any element has frequency greater than 1
        // unordered_map<int,int> freqNums;
        // O(n)
        for(int i = 0; i < nums.size(); ++i) {
            if(freqNums.find(nums[i]) == freqNums.end()) freqNums[nums[i]] = 0;
            freqNums[nums[i]] += 1;
        }

        // O(n)
        for(auto itr = freqNums.begin(); itr != freqNums.end(); ++itr) {
            if(itr->second > 1) return true;
        }
        return false;

        
        // O(n log n) time | O(1) space
        // sort the elements and check if any two adjacent elements are same
        // sort(nums.begin(), nums.end()); // O(n log n)
        // for(int i = 0; i < nums.size() - 1; ++i) {
        //     if(nums[i] == nums[i+1]) return true;
        // }
        // return false;
        
    }
};
