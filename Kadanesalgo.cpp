class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,m=INT_MIN;
        for(auto i : nums){
            s=s+i;
            m=max(s,m);
            if(s<0) s=0;      
        } return m;   
    }
};
