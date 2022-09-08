class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressed;
        for(int i = 0; i<nums.size(); i = i+2)
        {
            int freq = nums[i];
            while(freq)
            {
                decompressed.push_back(nums[i+1]);
                freq--;
            }
        }
        return decompressed;
    }
};
