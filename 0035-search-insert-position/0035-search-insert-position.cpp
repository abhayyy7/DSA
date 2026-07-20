class Solution {
public:
    int solve(vector<int>&nums,int target,int low,int high){
        if(high < low){
            return low;
        }
        int mid = low + (high-low)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return solve(nums,target,mid+1,high);
        else return solve(nums,target,low,mid-1);
    }
    int searchInsert(vector<int>& nums, int target) {
        return solve(nums,target,0,nums.size()-1);
    }
};