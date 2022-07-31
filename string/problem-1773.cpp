/*
PROBLEM STATEMENT

You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
Return the number of items that match the given rule.

Example:
Input: items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]], ruleKey = "type", ruleValue = "phone"
Output: 2
Explanation: There are only two items matching the given rule, which are ["phone","blue","pixel"] and ["phone","gold","iphone"]. Note that the item ["computer","silver","phone"] does not match.
*/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int total = 0;
        for(int i=0; i< items.size(); i++)
        {
            if(ruleKey == "type" && items[i][0] == ruleValue)
            {
                total += 1;
            }
            else if(ruleKey == "color" && items[i][1] == ruleValue)
            {
                total += 1;
            }
             else if(ruleKey == "name" && items[i][2] == ruleValue)
            {
                total += 1;
            }
        }
        return total;
    }
};
