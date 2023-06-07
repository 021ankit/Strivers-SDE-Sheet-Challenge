int removeDuplicates(vector<int> &arr, int n) {
	int i=1,j=1;
	while(j<n)
	{
		if(arr[j]!=arr[j-1])
         arr[i++]=arr[j];
		 j++;
	}
	return i;
}
