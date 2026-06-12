class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>m;
        
        for(auto v : board){
           for(char c : v){
             m[c]++;
             if(m[c]>1&&c!='.')
              return false;
           }
           m.clear();
        }
   m.clear();

        for(int j=0;j<board.size();j++){
          for(int i=0;i<board.size();i++){

            m[board[i][j]]++;
            if(m[board[i][j]]>1&&board[i][j]!='.')
            return false;
          }
          m.clear();
        }

        m.clear();
    
        for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
             m[board[i][j]]++;
            if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();


         for(int i=0;i<3;i++){
           for(int j=3;j<6;j++){
               m[board[i][j]]++;
            if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();

         for(int i=0;i<3;i++){
           for(int j=6;j<9;j++){
               m[board[i][j]]++;
           if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();

        for(int i=3;i<6;i++){
           for(int j=0;j<3;j++){
               m[board[i][j]]++;
            if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();


         for(int i=3;i<6;i++){
           for(int j=3;j<6;j++){
              m[board[i][j]]++;
            if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();

         for(int i=3;i<6;i++){
           for(int j=6;j<9;j++){
              m[board[i][j]]++;
           if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();
       
       for(int i=6;i<9;i++){
           for(int j=0;j<3;j++){
              m[board[i][j]]++;
            if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();


         for(int i=6;i<9;i++){
           for(int j=3;j<6;j++){
              m[board[i][j]]++;
           if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();

         for(int i=6;i<9;i++){
           for(int j=6;j<9;j++){
                m[board[i][j]]++;
         if(m[board[i][j]]>1&&board[i][j]!='.')
                return false;
           }            
        }
        m.clear();
      return true;
    

    }
};
