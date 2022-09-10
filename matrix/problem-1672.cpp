class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int len = accounts.size();
        int wealth = 0;
        for(int i = 0; i<len; i++)
        {
            int amount = 0;
            for(int j =0; j<accounts[i].size(); j++)
            {
                amount += accounts[i][j];
            }
            if(amount > wealth)
            {
                wealth = amount;
            }
        }
        return wealth;
    }
};
