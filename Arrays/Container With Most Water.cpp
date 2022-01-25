https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,m=0,a;
        while(i<j)
        {
            a=(j-i)*min(height[i],height[j]);
            m=max(a,m);
            if(height[i]<=height[j])
                i++;
            else
                j--;
        }
        return m;
    }
};
