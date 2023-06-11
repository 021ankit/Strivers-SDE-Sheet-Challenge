
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    bool static cmp(struct Item s1,struct Item s2)
    {
        double price1= s1.value*1.0/s1.weight;
        double price2= s2.value*1.0/s2.weight;
        return price1>=price2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        double ans=0;
        for(int i=0; i<n; i++)
        {
            int value=arr[i].value;
            int weight=arr[i].weight;
            if(W>=weight)
            {
                ans+= value;
                W-=weight;
            }
            else
            {
                double price=value*1.0/weight;
                ans+= W*price;
                break;
            }
        }
        return ans;
    }
        
};
