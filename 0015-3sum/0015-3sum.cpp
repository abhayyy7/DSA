class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                } else {
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++, k--;
                    while (j < k && nums[j - 1] == nums[j] && nums[k + 1] == nums[k]) {
                        j++, k--;
                    }
                }
            }
            while (i < nums.size() - 2 && nums[i] == nums[i + 1]) {
                i++;
            }
        }
        return result;
    }
};