double solve(vector<int>&arr1,vector<int>&arr2,int n,int m)
{
	int low=0,high=n;
	int pos=(n+m+1)/2;
	while(low<=high)
	{
		int cut1=(low+high)/2;
		int cut2=pos-cut1;
		int l1=cut1-1<0?INT_MIN: arr1[cut1-1];
		int l2=cut2-1<0?INT_MIN: arr2[cut2-1];
		int r1=cut1==n?INT_MAX: arr1[cut1];
		int r2=cut2==m?INT_MAX: arr2[cut2];
		if(l1<=r2 && l2<=r1)
		{
			if((n+m)&1)
			 return max(l1,l2);
			else
			 return (max(l1,l2)+min(r1,r2))/2.0;
		}
		if(l1>r2)
		high=cut1-1;
		else
		low=cut1+1;
	}
	return 0.0;
}
double median(vector<int>& a, vector<int>& b) {
	int n=a.size(),m=b.size();
	if(n<m)
	return solve(a,b,n,m);
	else
	return solve(b,a,m,n);
}
