string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans=arr[0];
    for(int i=1; i<n; i++)
    {
        int j=0, t=min(ans.size(),arr[i].size());
        string curr="";
        while(j<t)
        {
            if(ans[j]==arr[i][j])
             curr+=ans[j];
             else break;
             j++;
        }
        ans=curr;
    }
    return ans;
}


