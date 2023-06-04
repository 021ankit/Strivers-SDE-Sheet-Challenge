#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int sum=0,res=0,n=prices.size();
    for(int i=1; i<n; i++)
    {
        sum+= prices[i]-prices[i-1];
        res=max(res,sum);
        if(sum<0)
        sum=0;
    }
    return res;
}
