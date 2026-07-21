class Solution {
public:
    bool solve(int mid, vector<int>& piles, int h){
        int time = 0;
        for(int x : piles){
            time += (x+mid-1)/mid;
        }
        return time <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int low = 1, high = piles[n-1];
        while(low < high){
            int mid = low + (high-low)/2;
            if(solve(mid,piles,h)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};