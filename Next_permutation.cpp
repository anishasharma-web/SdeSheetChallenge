class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int i=A.size()-1,a=-1,b;
        for(;i>=1;i--){
            if(A[i-1]<A[i]){
                a=i-1;
                break;
            }
        }
        if(a!=-1){ 
        i=A.size()-1;
        for(;i>=1;i--){
            if(A[a]<A[i]){
                swap(A[a],A[i]);
                break;
            }
        }
            reverse(A.begin()+a+1,A.end());
        }
        else 
            reverse(A.begin(),A.end());
    }
};
