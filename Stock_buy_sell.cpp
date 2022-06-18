class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX,pmax=0;
        for(int i=0;i<prices.size();i++){
            m=min(m,prices[i]);
            pmax = max(prices[i]-m,pmax);
        }return pmax;
    }
};
