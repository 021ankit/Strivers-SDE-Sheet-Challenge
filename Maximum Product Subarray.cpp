#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int prefix=1,suffix=1,ans=INT_MIN;
	for(int i=0; i<n; i++)
	{
        prefix=prefix*arr[i];
		suffix=suffix*arr[n-i-1];
		ans=max(ans,max(prefix,suffix));
		if(prefix==0)
		 prefix=1;
		if(suffix==0)
		 suffix=1;
	}
	
	 return ans;
}
