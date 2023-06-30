int zAlgorithm(string s, string p, int n, int m)
{
    int ans=0;
	for(int i=0; i<=n-m; i++)
    {
        int j=0;
        while(j<m && s[i+j]==p[j])
        j++;
        if(j==m)    ans++;
    }
    return ans;
}
