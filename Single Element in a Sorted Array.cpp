int singleNonDuplicate(vector<int>& arr)
{
    if(arr.size()==1)
        return arr[0];
      int low=1, high=arr.size()-2;
      if(arr[0]!=arr[1])    return arr[0];
      if(arr[high+1]!=arr[high])  return arr[high+1];
      int mid;
      while(low<=high)
      {
          mid=low+(high-low)/2;
          if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
          return arr[mid];
          if(mid&1)
          {
             if(arr[mid]==arr[mid-1])
             low=mid+1;
             else
             high=mid-1;
          }
          else
          {
             if(arr[mid]==arr[mid+1])
             low=mid+1;
             else
             high=mid-1;
          }
      } 
      return arr[low]; 
}
