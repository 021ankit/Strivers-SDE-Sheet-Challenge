#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n==0)
	return 1;
	long t=modularExponentiation(x,n/2, m)%m;
	if(n&1)
	 return (((x*t)%m)*t)%m;
	else
	 return (t*t)%m;
}
