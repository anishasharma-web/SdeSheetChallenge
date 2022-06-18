class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                    swap(matrix[i][j],matrix[j][i]);
            }
        }
       for(auto & i : matrix){
           int s=0,h=matrix.size()-1;
           while(s<h){
               swap(i[s++],i[h--]);
           }
       }
    }
}; 
  
