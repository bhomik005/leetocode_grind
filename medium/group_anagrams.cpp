class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // time - O(m * n) where m is the lenght of strs vector and n is the average length of the strings in strs
        // space - O(m) where is m is the length of the strs vector
        unordered_map<string, vector<string>> res;
        for (string s : strs) {
            string count(26, '0');
            for (char c : s) {
                count[c - 'a']++;
            }
            res[count].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto map : res) {
            ans.push_back(map.second);
        }
        return ans;
    }

};
