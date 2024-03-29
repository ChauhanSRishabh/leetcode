/* PROBLEM STATEMENT
There is a programming language with only four operations and one variable X:
++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

Example:
Input: operations = ["++X","++X","X++"]
Output: 3
Explanation: The operations are performed as follows:
Initially, X = 0.
++X: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
X++: X is incremented by 1, X = 2 + 1 = 3.
*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(int i=0; i<operations.size();i++)
        {
            if(operations[i][1] == '+')
            {
                X += 1;
            }
            else
            {
                X -= 1;
            }
        }
        return X;;
        }
};
