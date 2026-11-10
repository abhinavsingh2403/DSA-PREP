class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> b(n, string(n, '.'));
        solve(0, b, ans, n);
        return ans;
    }

    bool issafe(int col, int row, vector<string>& b, int n) {
        int r = row, c = col;
        while (r >= 0 && c >= 0) {            
            if (b[r][c] == 'Q') return false;
            r--; c--;
        }
        r = row; c = col;
        while (c >= 0) {                     
            if (b[r][c] == 'Q') return false;
            c--;
        }
        r = row; c = col;
        while (r < n && c >= 0) {            
            if (b[r][c] == 'Q') return false;
            r++; c--;
        }
        return true;
    }

    void solve(int col, vector<string>& b, vector<vector<string>>& ans, int n) {
        if (col == n) {
            ans.push_back(b);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (issafe(col, row, b, n)) {
                b[row][col] = 'Q';
                solve(col + 1, b, ans, n);
                b[row][col] = '.';
            }
        }
    }
};