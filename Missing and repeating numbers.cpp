#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int N)
{ 
	long long sum=0,squaresum=0;
	long long n=N;
	long long totalsum=n*(n+1)/2,totalsquaresum=n*(n+1)*(2*n+1)/6;
	for(int i=0; i<n; i++)
	{
		sum+= arr[i];
		squaresum+= arr[i]*arr[i];
	}
	long long diff= sum-totalsum;
	long long diff2= squaresum-totalsquaresum;
	diff2= diff2/diff;
	long long repeat= (diff+diff2)/2;
	long long missing=diff2-repeat;
        return {(int)missing, (int)repeat};
}
