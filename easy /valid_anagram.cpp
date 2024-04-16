class Solution {

// if s.length() != t.length() return false
// 
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        // O(m log m) + O (n log n)
        // m is the length of the string s
        // n is the length of the string t 
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;


        // O(s + t) time | O(1) space
        int freqS[26];
        // calculating the freq of the chars in s
        for(int i = 0; i < s.length(); ++i) {
            freqS[s[i] - 'a']++;
        }

        int freqT[26];
        // calculating the freq of the chars in t
        for(int i = 0; i < t.length(); ++i) {
            freqT[t[i] - 'a']++;
        }

        for(int i = 0; i < 26; ++i) {
            if(freqS[i] != freqT[i]) return false;
        }
        return true;


        // use hashmap for input contains unicode characters
        // unordered_map<char,int> freqCharS;
        // // O(s) time | O(s) space
        // for(int i = 0; i < s.length(); ++i) {
        //     if(freqCharS.find(s[i]) == freqCharS.end()) freqCharS[s[i]] = 0;
        //     freqCharS[s[i]] += 1;
        // }
        // // O(t) time 
        // for(int i = 0; i < t.length(); ++i) {
        //     if(freqCharS.find(t[i]) != freqCharS.end() && freqCharS[t[i]] != 0) freqCharS[t[i]] -= 1;
        //     else return false;
        // }
        // return true;
    }
};
