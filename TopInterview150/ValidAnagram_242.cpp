class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[256]{};
        int i;
        for(i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        for(i=0;i<t.length();i++){
            hash[t[i]]--;
        }
        for(i=0;i<256;i++){
            if(hash[i]!=0)
                return false;
        }
        return true;
    }
};
