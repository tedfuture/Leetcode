class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> hash(12,0);
        if(!chkline(board,hash)) 
            return false;
        hash[0] = 1;
        if(!chkline(board,hash)) 
            return false;
        for(char i=3;i<12;i+=3){
            for(char j=3;j<12;j+=3){
                hash[10] = i;
                hash[11] = j;
                if(!chksquare(board,hash)){
                    // printf("[%d %d] ", i, j);
                    return false;
                }
                hash = vector<char>(12,0);
            }
            
        }
        return true;
    }

    bool chkline(vector<vector<char>>& board,vector<char>&hash){
        char* p;
        char* q;
        if(hash[0]==0){
            p = &hash[10];
            q = &hash[11];
        }
        else{
            p = &hash[11];
            q = &hash[10];
        }
        for(hash[10]=0;hash[10]<9;hash[10]++){
            for(hash[11]=0;hash[11]<9;hash[11]++){
                if(board[*p][*q]!='.'){
                    if(hash[board[*p][*q]-'0']>0)
                        return false;
                    else
                        hash[board[*p][*q]-'0']++;
                }
            }
            for(hash[11]=1;hash[11]<=9;hash[11]++)
                hash[hash[11]] = 0;
        }
        return true;
    }

    bool chksquare(vector<vector<char>>& board,vector<char>&hash){
        for(char i=hash[10]-3;i<hash[10];i++){
            for(char j=hash[11]-3;j<hash[11];j++){
                if(board[i][j]!='.'){
                    if(hash[board[i][j]-'0']>0)
                        return false;
                    else
                        hash[board[i][j]-'0']++;
                }
            }
        }
        return true;
    }
};
