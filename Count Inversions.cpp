#include <bits/stdc++.h> 
long long cnt=0;
void merge(long long *arr,int low,int mid,int high)
{
  int i=low,j=mid+1;
  
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
}
void mergesort(long long *arr,int low,int high)
{
    if(low>=high)   return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
long long getInversions(long long *arr, int n){
     mergesort(arr,0,n-1);
     return cnt;
}
