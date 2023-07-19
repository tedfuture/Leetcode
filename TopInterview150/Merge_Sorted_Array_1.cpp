class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        while(i<m && j<n){
            if(nums2[j]<nums1[i]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                m++;
                j++;
            }
            i++;
        }
        if(j<n){
            nums1.insert(nums1.begin()+m,nums2.begin()+j,nums2.begin()+n);
            m = m + n-j;
        }
        if(m<nums1.size())
            nums1.resize(m);
    }
};
