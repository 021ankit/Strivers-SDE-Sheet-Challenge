class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0,j=0,one=0,zero=0,n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]==1)   one++;
            else zero++;
            if(zero>k)
            {
                ans=max(ans,one+k);
                while(nums[j]!=0)
                {
                    j++;
                    one--;
                }
                zero--;
                j++;
            }
        }
        ans=max(ans,one+zero);
        return ans;
    }
};
