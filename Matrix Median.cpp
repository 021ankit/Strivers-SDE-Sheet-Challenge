int findnum(int tar,vector<int>&arr)
{
    int low=0,high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=tar)
        low=mid+1;
        else
        high=mid-1;
    }
    return low;
}
int getMedian(vector<vector<int>> &matrix)
{
     int low=1e5,high=0;
     int n=matrix.size(),m=matrix[0].size();
     for(int i=0; i<n; i++)
     {
         if(matrix[i][0]<low)
           low=matrix[i][0];
         if(matrix[i][m-1]>high)
          high=matrix[i][m-1];
     }
     int total=n*m/2;
     while(low<=high)
     {
         int mid=(low+high)/2;
         int cnt=0;
         for(int i=0; i<n; i++)
         {
             cnt+=findnum(mid,matrix[i]);
         }
      //   if(cnt==total) return mid;
         if(cnt<=total)
         {
             low=mid+1;
         }
         else
         high=mid-1;
     }
     return low;
}
