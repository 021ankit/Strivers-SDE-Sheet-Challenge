#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int tar) {
	 vector<vector<int>>res;
	 sort(arr.begin(),arr.end());
	 for(int i=0; i<n; i++)
	 {
		 if(i>0 && arr[i]==arr[i-1])	continue;
		 int j=i+1,k=n-1;
		 while(j<k)
		 {
			 int sum=arr[i]+arr[j]+arr[k];
			 if(sum==tar)
			 {
				 res.push_back({arr[i],arr[j],arr[k]});
				 while(j<k && arr[j]==arr[j+1])	j++;
				 while(j<k && arr[k]==arr[k-1])	k--;
				 j++; k--;
			 }
			 else if(sum>tar)
			  k--;
			 else 
			  j++;
		 }
	 }
	 return res;
}
