https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>v;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j])
                v.push_back(nums1[i++]);
            else
                v.push_back(nums2[j++]);
            
        }
        if(i!=nums1.size())
        {
            for(int k=i;k<nums1.size();k++)
                v.push_back(nums1[k]);
        }
        if(j!=nums2.size())
            for(int k=j;k<nums2.size();k++)
                v.push_back(nums2[k]);
        double p;
        if(v.size()%2)
             p=v[v.size()/2];
        else
            p=(v[v.size()/2]+v[(v.size()/2)-1])/2.0;
        return p;
    }
};
