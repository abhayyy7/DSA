class Solution {
public:
    bool solve(vector<int>& piles,int k,int h){
        long long count = 0;
        for(int i = 0; i < piles.size(); i++){
            if(piles[i] >= k) count += ((piles[i]+k-1)/k);
            else count++;
        }
        return count <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            int mid = low + (high-low)/2;
            if(solve(piles,mid,h)) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};