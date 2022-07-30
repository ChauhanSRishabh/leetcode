/*
PROBLEM STATEMENT
You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.

Example:
Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
*/


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char shuffled[s.length()+1]; // string as char array, length +1 for termination character
        shuffled[s.length()] = '\0';
        
        for (int i=0; i<s.size(); i++)
        {
            shuffled[indices[i]] = s[i];
        }
        return shuffled;
        
    }
};
