class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int a = nums[nums[i]];
            v.push_back(a);
        }
        return v;
    }
};
