class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int biggest = 0;
        for(int i = 0; i<candies.size(); i++)
        {
            if(candies[i]>biggest)
                biggest = candies[i];
        }
        for(int i = 0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies >= biggest)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};
