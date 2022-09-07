class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> Sum;
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            sum += nums[i];
            Sum.push_back(sum);
        }
        return Sum;
    }
};
