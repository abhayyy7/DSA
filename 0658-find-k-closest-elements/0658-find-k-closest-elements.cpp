class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = 0, j = arr.size()-1;
        while(j-i >= k){
            if(abs(arr[i]-x) > abs(arr[j]-x)) i++;
            else j--;
        }
        vector<int>ans;
        for(int x = i; x <= j; x++){
            ans.push_back(arr[x]);
        }
        return ans;
    }
};