class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        for(auto it:nums2)
            nums1[m+i++] = it;
        std::sort(nums1.begin(),nums1.end());
    }
};
