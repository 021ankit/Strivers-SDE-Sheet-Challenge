#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    int n1=str1.length(),n2=str2.length();
    if(n1!=n2)  return false;
    vector<int>v1(26,0),v2(26,0);
    for(int i=0; i<n1; i++)
    {
        v1[str1[i]-'a']++;
        v2[str2[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(v1[i]!=v2[i])    return false;
    }
    return true;
}
