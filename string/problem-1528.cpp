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
         string shuffled; // string in cpp is a vector and so in order to perform operation on it as a character array, first specify the size of this vector
         shuffled.resize(s.size());
        
        for (int i=0; i<s.size(); i++)
        {
            shuffled[indices[i]] = s[i];
        }
        return shuffled;
        
    }
};
