#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long leftmax=0,rightmax=0;
    vector<long>left(n,INT_MIN),right(n,INT_MIN);
    for(int i=0; i<n; i++)
    {
       left[i]=leftmax;
       leftmax=max(leftmax,arr[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        right[i]=rightmax;
        rightmax=max(rightmax,arr[i]);
    }
    long res=0;
    for(int i=1; i<n-1; i++)
    {
        if(arr[i]<left[i] && right[i]>arr[i])
         res+= min(left[i],right[i])-arr[i];
    }
    return res;
}
