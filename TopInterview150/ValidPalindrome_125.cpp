class Solution {
public:
    bool isPalindrome(string s) {
        char hash[256]{};
        int i,j;
        for(i=0;i<26;i++){
            hash['A'+i] =i+1;
            hash['a'+i] =i+1;
            if(i<10)
                hash['0'+i]=27+i;
        }

        for(i=0, j=s.length()-1;i<j;i++,j--){
            while(hash[s[i]]==0 && i<j)
                i++;
            while(hash[s[j]]==0 && i<j)
                j--;
            if(hash[s[i]] != hash[s[j]])
                return false;
        }
        return true;
    }
};
