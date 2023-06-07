#include <bits/stdc++.h> 
int merge(vector<int>&arr,int low,int mid,int high)
{
   int cnt=0;
   int i=low,j=mid+1;
   while(i<=mid && j<=high)
   {
     if (arr[i] > 2 * arr[j]) {
       cnt += (mid - i + 1);
	   j++;
     }
	 elsea
	  i++;
   }	
   vector<int>temp;
   i=low, j=mid+1;
   while(i<=mid && j<=high)
   {
	   if(arr[i]<=arr[j])
	    temp.push_back(arr[i++]);
	   else 
	    temp.push_back(arr[j++]);
   }
   while(i<=mid)
     temp.push_back(arr[i++]);
   while(j<=high)
     temp.push_back(arr[j++]);
	for(int i=low; i<=high; i++)
	  arr[i]=temp[i-low];
	return cnt;
}
int mergesort(vector<int>&arr,int low,int high)
{
	int cnt=0;
	if(low>=high)	return 0;
	int mid=(low+high)/2;
	cnt+= mergesort(arr,low,mid);
	cnt+= mergesort(arr,mid+1,high);
	cnt+= merge(arr,low,mid,high);
	return cnt;
}
int reversePairs(vector<int> &arr, int n){
	return mergesort(arr,0,n-1);
}
