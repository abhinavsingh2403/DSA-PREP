class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minpr=INT_MAX,maxpr=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minpr){
                minpr=prices[i];
            }
            else if(prices[i]-minpr>maxpr){
                maxpr=prices[i]-minpr;
            }
        }
        return maxpr;
    }
};