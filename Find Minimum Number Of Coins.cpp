#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>coins={1,2,5,10,20,50,100,500,1000};
    int ans=0;
    for(int i=8; i>=0; i--)
    {   
        int t=amount/coins[i];
        ans+= t;
        amount-= (t*coins[i]);
    }
    return ans;
}
