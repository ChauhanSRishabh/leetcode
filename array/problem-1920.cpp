class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;
        for(int i=0; i< n; i++)
        {
            output.push_back(nums[nums[i]]);
        }
        return output;
    }
};
