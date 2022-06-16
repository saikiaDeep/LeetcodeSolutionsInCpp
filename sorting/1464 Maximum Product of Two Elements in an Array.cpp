class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1,max2,n;
        max1=INT_MIN;
        max2=max1;
        n=nums.size();
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(nums[i]>max1)
            {
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2)
            {
                max2=nums[i];
            }
        }
        return (max1-1)*(max2-1);
        
    }
};