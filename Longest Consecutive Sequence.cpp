#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>st;
    int ans=0;
    for(auto x:arr)
    {
        st.insert(x);
    }
    for(int i=0; i<n; i++)
    {
        if(st.find(arr[i]-1)==st.end())
        {
            int cnt=0;
            while(st.find(arr[i])!=st.end())
            {
                cnt++;
                st.erase(arr[i]);
                arr[i]++;
            }
            ans=max(ans,cnt);
        }
    }
    return ans;
}
