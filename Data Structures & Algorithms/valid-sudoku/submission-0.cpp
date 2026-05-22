class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       int n = board.size();
       // horizontal
       for(int i=0;i<n;i++){
        set<int> st;
        for(int j=0;j<n;j++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st.find(ele) != st.end()) 
                    return false;
                else
                st.insert(ele);
            } 
        }
       }
        // vertical
       for(int j=0;j<n;j++){
        set<int> st;
        for(int i=0;i<n;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st.find(ele) != st.end()) 
                    return false;
                else
                st.insert(ele);
            } 
        }
       }

       // small boxes
       // j = 0,1,2
        set<int> st1;
        set<int> st2;
        set<int> st3;
       for(int j=0;j<3;j++){
  
        for(int i=0;i<3;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st1.find(ele) != st1.end()) 
                    return false;
                else
                st1.insert(ele);
            } 
        }
        for(int i=3;i<6;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st2.find(ele) != st2.end()) 
                    return false;
                else
                st2.insert(ele);
            } 
        }
        for(int i=6;i<9;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st3.find(ele) != st3.end()) 
                    return false;
                else
                st3.insert(ele);
            } 
        }
       }
       
       // j = 3,4,5
      st1.clear();
      st2.clear();
      st3.clear();
       for(int j=3;j<6;j++){
        for(int i=0;i<3;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st1.find(ele) != st1.end()) 
                    return false;
                else
                st1.insert(ele);
            } 
        }
        for(int i=3;i<6;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st2.find(ele) != st2.end()) 
                    return false;
                else
                st2.insert(ele);
            } 
        }
        for(int i=6;i<9;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st3.find(ele) != st3.end()) 
                    return false;
                else
                st3.insert(ele);
            } 
        }
       }

       // j = 6,7,8
       st1.clear();
      st2.clear();
      st3.clear();
       for(int j=6;j<9;j++){

        for(int i=0;i<3;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st1.find(ele) != st1.end()) 
                    return false;
                else
                st1.insert(ele);
            } 
        }
        for(int i=3;i<6;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st2.find(ele) != st2.end()) 
                    return false;
                else
                st2.insert(ele);
            } 
        }
        for(int i=6;i<9;i++){
            if(board[i][j] != '.'){
                int ele = board[i][j]-'0';
                if(st3.find(ele) != st3.end()) 
                    return false;
                else
                st3.insert(ele);
            } 
        }
       }
       return true;
    }
};
