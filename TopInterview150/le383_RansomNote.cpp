class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[128]{};
        int i;
        for(i=0;i<magazine.length();i++)
            hash[magazine[i]]++;
        for(i=0;i<ransomNote.length();i++){
            if(hash[ransomNote[i]]<=0)
                return false;
            hash[ransomNote[i]]--;
        }
        return true;
    }
};
