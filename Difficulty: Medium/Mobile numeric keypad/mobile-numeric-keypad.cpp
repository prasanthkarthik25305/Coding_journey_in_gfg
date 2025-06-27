class Solution {
public:
    int dx[5] = {0, 1, -1, 0, 0};
    int dy[5] = {0, 0, 0, 1, -1};
    vector<vector<char>> mat = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'},
        {'*','0','#'}
    };

    int dp[4][3][16];

    bool isValid(int x, int y) {
        if (x < 0 || x >= 4 || y < 0 || y >= 3) return false;
        if (mat[x][y] == '*' || mat[x][y] == '#') return false;
        return true;
    }

    int rec(int i, int j, int len, int n) {
        if (!isValid(i, j)) return 0;
        if (len == n) return 1;
        if (dp[i][j][len] != -1) return dp[i][j][len];

        int ans = 0;
        for (int d = 0; d < 5; d++) {
            int ni = i + dx[d];
            int nj = j + dy[d];
            ans += rec(ni, nj, len + 1, n);
        }
        return dp[i][j][len] = ans;
    }

    int getCount(int n) {
        memset(dp, -1, sizeof(dp));
        int total = 0;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                if (isValid(i, j)) {
                    total += rec(i, j, 1, n);
                }
            }
        }
        return total;
    }
};
