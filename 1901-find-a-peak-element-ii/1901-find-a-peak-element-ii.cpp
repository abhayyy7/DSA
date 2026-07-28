class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int l = (j > 0) ? mat[i][j - 1] : -1;
                int r = (j < n - 1) ? mat[i][j + 1] : -1;
                int t = (i > 0) ? mat[i - 1][j] : -1;
                int b = (i < m - 1) ? mat[i + 1][j] : -1;
                if(mat[i][j] > l && mat[i][j] > r && mat[i][j] > t && mat[i][j] > b ) return {i,j};
            }
        }
        return {};
    }
};