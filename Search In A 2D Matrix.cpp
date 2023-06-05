bool searchMatrix(vector<vector<int>>& mat, int target) {
        int i=0,j=mat[0].size()-1,n=mat.size();
        while(i<n && j>=0)
        {
            if(mat[i][j]==target)   return true;
            if(mat[i][j]>target)
             j--;
            else
            i++;
        }
        return false;
}
