//simple nlogn answer
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target)
    {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// Time: O(N) brilliant answer
//counting sort
// Space: O(1)
class Solution {
public:
    vector<int> targetIndices(vector<int>& A, int target) {
        int cnt = 0, rank = 0; // `cnt` is the frequency of `target`, `rank` is the sum of frequencies of all numbers which are less than target
        for (int n : A) {
            cnt += n == target;
            rank += n < target;
        }
        vector<int> ans;
        while (cnt--) ans.push_back(rank++);
        return ans;
    }
};