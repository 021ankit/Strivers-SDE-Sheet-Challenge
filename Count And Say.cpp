#include <bits/stdc++.h> 
string nextstr(string str)
{
	int n=str.length();
	int cnt=1;
	string ans="";
	for(int i=1; i<n; i++)
	{
		if(str[i]==str[i-1])
		 cnt++;
		else
		{
			ans+=to_string(cnt);
			ans+=str[i-1];
			cnt=1;
		}
	}
	ans+=to_string(cnt);
	ans+=str[n-1];
	return ans;
}
string writeAsYouSpeak(int n) 
{
	string str="1";
	for(int i=1; i<n; i++)
	{
		str=nextstr(str);
	}	
	return str;
}
