#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
  int left=m-1,right=0;
  while(left>=0 && right<n)
  {
	  if(arr1[left]>arr2[right])
	  {
		  swap(arr1[left],arr2[right]);
		  left--; right++;
	  }
	  else
	   break;
  }
  sort(arr1.begin(),arr1.begin()+m);
  sort(arr2.begin(),arr2.end());
  left=m,right=0;
  while(right<n)
  {
	  arr1[left++]=arr2[right++];
  }
  return arr1;
}
