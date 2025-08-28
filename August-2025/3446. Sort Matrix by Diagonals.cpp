class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        int n = grid.size();

    
    for (int row = n - 1; row >= 0; row--) {
        vector<int> diagonal;
        int i = row, j = 0;
        while (i < n && j < n) {
            diagonal.push_back(grid[i][j]);
            i++;
            j++;
        }
        sort(diagonal.rbegin(), diagonal.rend()); 

       
        i = row, j = 0;
        for (int val : diagonal) {
            grid[i][j] = val;
            i++;
            j++;
        }
    }

  
    for (int col = 1; col < n; col++) {
        vector<int> diagonal;
        int i = 0, j = col;
        while (i < n && j < n) {
            diagonal.push_back(grid[i][j]);
            i++;
            j++;
        }
        sort(diagonal.begin(), diagonal.end());  

        i = 0, j = col;
        for (int val : diagonal) {
            grid[i][j] = val;
            i++;
            j++;
        }
    }
        return grid;
    }
};