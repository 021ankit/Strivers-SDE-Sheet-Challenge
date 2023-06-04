#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals)
{
    // Write your code here
    vector<vector<int>>res;
    sort(intervals.begin(),intervals.end());
    int st=intervals[0][0],end=intervals[0][1];
    for(int i=1; i<intervals.size(); i++)
    {
        if(intervals[i][0]<=end)
         end=max(end,intervals[i][1]);
        else
        {
            res.push_back({st,end});
            st=intervals[i][0];
            end=intervals[i][1];
        }
    }
    res.push_back({st,end});
    return res;
}
