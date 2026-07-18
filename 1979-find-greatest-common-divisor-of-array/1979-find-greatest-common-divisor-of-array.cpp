class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mine = *min_element(nums.begin(),nums.end());
        int maxe = *max_element(nums.begin(),nums.end());
        return gcd(mine,maxe);
    }
};