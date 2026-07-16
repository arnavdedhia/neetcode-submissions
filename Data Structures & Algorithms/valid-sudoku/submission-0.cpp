class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int arr[10] = {0}; 
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                arr[(board[i][j]) - '0']++;
                if(arr[(board[i][j]) - '0'] > 1){
                    return false;
                }
            }
            std::fill_n(arr, 10, 0);
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                arr[(board[j][i]) - '0']++;
                if(arr[(board[j][i]) - '0'] > 1){
                    return false;
                }
            }
            std::fill_n(arr, 10, 0);
            int row = (i / 3) * 3;
            int col = (i % 3) * 3;
            for (int j = 0; j < 9; j++) {
                int r = row + j / 3;
                int c = col + j % 3;
                if (board[r][c] == '.') continue;
                int num = board[r][c] - '0';
                arr[num]++;
                if (arr[num] > 1) return false;
            }
            std::fill_n(arr, 10, 0);
        }
        return true;
    }
};
