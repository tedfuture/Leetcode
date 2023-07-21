class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x){
            int b = ((x>0)?INT_MAX:INT_MIN)/10;
            int d = (x>0)?(b-y):(y-b);
            if(d<0)
                return 0;
            y=y*10+x%10;
            x/=10;
        }
        return y;
    }
};
