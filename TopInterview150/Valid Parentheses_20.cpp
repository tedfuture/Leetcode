class Solution {
public:
    bool isValid(string s) {
        map<char,char> hash={
            make_pair(')','('),
            make_pair(']','['),
            make_pair('}','{')
        };
        stack<char> buf;
        for(int i=0;s[i]!='\0';i++){
            switch(s[i]){
            case '(':
            case '[':
            case '{':
                buf.push(s[i]);
                break;
            default:
                if(buf.empty())
                    return false;
                else {
                    if(buf.top()!=hash[s[i]])
                        return false;
                    buf.pop();
                }
            }
        }
        return buf.empty();
    }
};
