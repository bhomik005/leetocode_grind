class Solution {
public:
    bool isPalindrome(string s) {
        // Preprocessing: converting uppercase to lowercase and removing non-alphanumeric characters
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] >= int('A') && s[i] <= int('Z')) // Uppercase to lowercase conversion
                s[i] = tolower(s[i]);
            else if (!(s[i] >= int('a') && s[i] <= int('z')) && !(s[i] >= int('0') && s[i] <= int('9'))) // Removing non-alphanumeric characters
                s.erase(i, 1);
        }
        
        // Checking for palindrome
        int leftPtr = 0;
        int rightPtr = s.size() - 1;
        while (leftPtr <= rightPtr) {
            if (s[leftPtr] == s[rightPtr]) {
                leftPtr++;
                rightPtr--;
            }
            else {
                return false;
            }
        }
        
        return true;
    }
