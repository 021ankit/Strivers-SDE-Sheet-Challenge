
#include <bits/stdc++.h> 
bool ispos(int dis,vector<int>&v,int n,int c)
{
	int cnt=1,pos=v[0];
	for(int i=1; i<n; i++)
	{
		if(v[i]-pos>=dis)
		{
			cnt++;
			pos=v[i];
		}
	}
	return cnt>=c;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(),positions.end());
	int low=1,high=positions[n-1];
	int ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(ispos(mid,positions,n,c))
		{
			ans=mid;
			low=mid+1;
		}
		else
		high=mid-1;
	}
	return high;
}
