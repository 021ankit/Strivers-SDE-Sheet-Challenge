int power(int t,int n,int m)
{
  long f=1;
  for(int i=1; i<=n; i++)
  {
    if(f*t>m)  return m+1;
    f=f*t;
    
  }
  return f;
}
int NthRoot(int n, int m) {
  int low=1,high=m/n;
  while(low<=high)
  {
    int mid=(low+high)/2;
    int t=power(mid,n,m);
    if(t==m)  return mid;
    if(t<m)
    low=mid+1;
    else
     high=mid-1;
  }
  return -1;
}
