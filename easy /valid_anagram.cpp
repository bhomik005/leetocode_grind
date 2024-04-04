class Solution {
public:
    bool isAnagram(string s, string t) {
        // base case check the lengths of s and t
        // O(s + t) time | O(uniqueChars in s)
        if(s.size() != t.size()) return false;
        // O(n) time | O(s) space -> n is input size and s is number of unique chars in s
        // iterate over string s and store the freq of chars in hashmap
        unordered_map<char,int> freqChars;
        for(int i = 0; i < s.size(); ++i) {
            if(freqChars.find(s[i]) == freqChars.end()) freqChars[s[i]] = 0;
            freqChars[s[i]] += 1;
        }
        // O(n) -> n is input size of t
        // iterate over string t and check if all the chars with same frequency exist in map
        for(int i = 0; i < t.size(); ++i) {
            if(freqChars.find(t[i]) != freqChars.end() && freqChars[t[i]] > 0) freqChars[t[i]] -= 1;
            else return false;
        } 
        // if it does return true else return false
        return true;
    }
};
