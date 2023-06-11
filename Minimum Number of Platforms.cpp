int calculateMinPatforms(int at[], int dt[], int n) {
    
    sort(at,at+n);
    sort(dt,dt+n);
    int ans=1;
    int j=0,i=1;
    int cnt=1;
    while(i<n)
    {
        if(at[i]<=dt[j])
        {
            i++;
            cnt++;
        }
        else
        {
            j++;
            cnt--;
        }
        ans=max(ans,cnt);
    }
    return ans;
}
