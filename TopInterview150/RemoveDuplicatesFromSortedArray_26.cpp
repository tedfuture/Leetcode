class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        int old = nums[k-1]+1;
        for(int i=k-1;i>=0;i--){
            if(old == nums[i]){
                for(int j=i+1;j<k;j++){
                    if(j+1<k)
                        nums[j] = nums[j+1];
                }
                k--;
            }
            old = nums[i];
        }
        return k;
    }
};
