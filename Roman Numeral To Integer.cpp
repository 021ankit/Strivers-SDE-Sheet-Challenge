#include <bits/stdc++.h> 
int val(char c)
{
    switch(c)
    {
        case 'I':
        return 1;
        case 'V' :
        return 5;
        case 'X' :
        return 10;
        case 'L' :
        return 50;
        case 'C' :
        return 100;
        case 'D' :
        return 500;
        case 'M' :
        return 1000;
    } 
    return -1;
}
int romanToInt(string s) {
    int n=s.length();
    int ans=val(s[n-1]);
    for(int i=n-2; i>=0; i--)
    {
        int prev=val(s[i+1]);
        int curr=val(s[i]);
        if(curr>=prev)
         ans+=curr;
        else
         ans-=curr;
    }
   return ans;
}
