class Solution {
public:
    // int f(int ind, bool buy, vector<int> &prices,
    //         vector<vector<int>> &dp){  MEMOIZATION
    //     if(ind==prices.size())
    //         return 0;
    //     if(dp[ind][buy]!=-1) return dp[ind][buy];
    //     int profit=INT_MIN;
    //     if(buy){
    //         int take= -prices[ind] + f(ind+1,false,prices,dp);
    //         int notTake= 0+ f(ind+1, true, prices,dp);
    //         profit=max(take,notTake);
    //     }
    //     else{
    //         int sellHere= prices[ind] + f(ind+1,true, prices,dp);
    //         int notSellHere = 0+ f(ind+1,false,prices,dp);
    //         profit=max(sellHere,notSellHere);
    //     }
    //     return dp[ind][buy] =profit;
    // }
    
        int maxProfit(vector<int>& prices){  
        
        int aheadBuy,aheadNotBuy,currBuy,currNotBuy;
        aheadBuy=aheadNotBuy=0;
        for(int i=prices.size()-1;i>=0;i--){
            currBuy= max(-prices[i] + aheadNotBuy, aheadBuy);
            currNotBuy= max(prices[i] + aheadBuy,  aheadNotBuy);
            
            
            aheadBuy=currBuy;
            aheadNotBuy=currNotBuy;
        }
        return aheadBuy;
    }
    
    
    
    
//     int maxProfit(vector<int>& prices){  //space optimized with array
//         // vector<vector<int>> dp(prices.size(), vector<int> (2,-1));
//         // return f(0,true,prices,dp);
        
//         vector<int> ahead(2,0),curr(2,0);
//         ahead[0]=ahead[1]=0;
//         for(int i=prices.size()-1;i>=0;i--){
//             for(int buy=0;buy<=1;buy++){
//                 int profit=0;
//                 if(buy){
//                     profit= max(-prices[i] + ahead[0],
//                                 ahead[1]);
//                 }else{
//                     profit= max(prices[i] + ahead[1],
//                                 ahead[0]);
//                 }
//                 curr[buy]=profit;
//             }
//             ahead=curr;
//         }
//         return ahead[1];
//     }
};