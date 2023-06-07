#include <bits/stdc++.h> 

long long merge(long long *arr,int low,int mid,int high)
{
  int i=low,j=mid+1;
  long long cnt=0;
   vector<long long>temp;

  while(i<=mid && j<=high)
  {
      if(arr[i]<=arr[j])
       temp.push_back(arr[i++]);
      else {
        temp.push_back(arr[j++]);
        cnt+=(mid-i+1);
      }
  }
  while(i<=mid)
    temp.push_back(arr[i++]);
  while(j<=high)
    temp.push_back(arr[j++]);
   for(i=low; i<=high; i++)
    arr[i]=temp[i-low];
    return cnt;
}
long long mergesort(long long *arr,int low,int high)
{
    if(low>=high)   return 0;
    int mid=(low+high)/2;
    long long cnt=0;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=merge(arr,low,mid,high);
    return cnt;
}
long long getInversions(long long *arr, int n){
     return mergesort(arr,0,n-1);
}
