class Solution {
public:
    bool isPowerOfTwo(int n) {
        long count=0;
        if(n<0){return false;}
        while(n!=0){
            int bit=n&1;
            if (bit==1){
                count++;
            }
            n=n>>1;
        }
        if(count==1){
            return true;
        }
        else{
            return false;
        }
    }
};