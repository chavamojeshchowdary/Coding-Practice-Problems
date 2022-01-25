https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        if(nums.size()<3)
            return v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int l=i+1,h=nums.size()-1;
            while(l<h)
            {
                if(nums[i]+nums[l]+nums[h]==0)
                {
                    v.push_back({nums[i],nums[l],nums[h]});
                    while(l+1<nums.size()&&nums[l]==nums[l+1])
                        l++;
                    while(h-1>i&&nums[h]==nums[h-1])
                        h--;
                    l++;
                    h--;
                } 
                else if(nums[i]+nums[l]+nums[h]<0)
                    l++;
                else
                    h--;
            }
        }
        return v;
    }
};
