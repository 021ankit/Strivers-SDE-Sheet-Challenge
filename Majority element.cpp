#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt=0,ele;
	for(int i=0; i<n; i++)
	{
		if(cnt==0)
		{
			cnt=1;
			ele=arr[i];
		}
		else if(ele==arr[i])
		 cnt++;
		else
		 cnt--;
	}
	cnt=0;
	for(int i=0; i<n; i++) { if(ele==arr[i]) cnt++;}
	if(cnt>n/2)	return ele;
	return -1;
}
