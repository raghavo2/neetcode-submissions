class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(2*nums.size());
        ans = nums;
        for(int n : nums){
            ans.push_back(n);
        }
    return ans;
    }
};