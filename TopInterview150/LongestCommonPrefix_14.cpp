class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int len = min(strs[0].length(), strs.back().length());
        int i=0;
        while(i<len && strs[0][i]==strs.back()[i]){
            i++;
        }
        return strs[0].substr(0,i);
    }
};

class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs.at(0);
        for(auto str:strs){
            while(str.find(prefix)!=0)
                prefix.pop_back();
        }
        return prefix;
    }
};

class Solution3 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs.at(0);
        string s;
        for(int i=0;i<strs.at(0).length();i++){
            int cnt=0;
            char c=strs.at(0)[i];
            for(auto str:strs){
                if(i == str.length() || c!=str[i])
                    return s;
                cnt++;
            }
            if(cnt<strs.size())
                return s;
            s+=c;
        }
        return s;
    }
};
