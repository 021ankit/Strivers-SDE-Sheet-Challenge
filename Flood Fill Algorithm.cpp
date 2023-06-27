vector<int>dx,dy;
void dfs(vector<vector<int>> &image,int x,int y,int newColor,int prev)
{
    image[x][y]=newColor;
   // ans[x][y]=newColor
    for(int k=0; k<4; k++)
    {
        int i=x+dx[k];
        int j=y+dy[k];
        if(i>=0 && i<image.size() && j>=0 && j<image[0].size() && image[i][j]==prev && image[i][j]!=newColor)
        {
            dfs(image,i,j,newColor,prev);
        }
    }
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    dx={0,0,1,-1};
    dy={1,-1,0,0};
    int n=image.size(),m=image[0].size();
    dfs(image,x,y,newColor,image[x][y]);
    return image;
}
