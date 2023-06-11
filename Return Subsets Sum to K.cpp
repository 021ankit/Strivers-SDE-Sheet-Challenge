void solve(int i,int n,int sum,int k,vector<int>&arr,vector<int>temp,vector<vector<int>>&res)
{
    if(i==n)
    {
        if(sum==k)
         res.push_back(temp);
        return;
    }   
    solve(i+1,n,sum,k,arr,temp,res);
    temp.push_back(arr[i]);
    solve(i+1,n,sum+arr[i],k,arr,temp,res);
    temp.pop_back();
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
     vector<vector<int>>res;
     vector<int>temp;
     solve(0,n,0,k,arr,temp,res);
     return res;
}
