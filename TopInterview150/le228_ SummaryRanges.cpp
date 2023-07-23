class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> list;
        if(nums.size()==1){
            list.push_back(to_string(nums[0]));
            return list;
        }
        else if(nums.size()==0){
            return list;
        }
        int s=0;
        int e=1;
        while(e<nums.size()){
            long long diff = (long long)nums[e]-nums[e-1];
            if(diff>1){
                string str;
                if(s == (e-1))
                    str = to_string(nums[s]);
                    //list.push_back(to_string(nums[s]));
                else
                    str = to_string(nums[s])+"->"+to_string(nums[e-1]);
                    //list.push_back(to_string(nums[s])+"->"+to_string(nums[e-1]));
                list.push_back(str);
                s = e;    
            }
            e++;
        }

        if(e-s>=2)
            list.push_back(to_string(nums[s])+"->"+to_string(nums[e-1])); 
        else
            list.push_back(to_string(nums[e-1]));
        return list;
    }
};
