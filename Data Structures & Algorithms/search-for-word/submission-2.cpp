class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        bool  ans = false;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0])
                ans = helper(board,word,n,m,i,j,0,v);
            if(ans==true) return true;
            }
        }
        return false;
    }
    bool helper(vector<vector<char>>& board,string &word,int &n,int&m,int r,int c,int ind,vector<vector<int>>v){
            if(ind==word.size()) return true;
            if(r<0||c<0||r>=n||c>=m||v[r][c]==1||board[r][c]!=word[ind]){
                return false;
            }
            v[r][c] = 1;

            return
                helper(board,word,n,m,r-1,c,ind+1,v)||
                helper(board,word,n,m,r+1,c,ind+1,v)||
                helper(board,word,n,m,r,c+1,ind+1,v)||
                helper(board,word,n,m,r,c-1,ind+1,v);
                
    }
};
