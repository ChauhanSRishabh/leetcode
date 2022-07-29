/*
PROBLEM STATEMENT

You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int total = 0;
        int n = jewels.size();
        int m = stones.size();
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(jewels[i] == stones[j])
                {
                    total += 1;
                }
            }
        }
        return total;
    }
};
