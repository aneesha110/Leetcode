class Solution {
public:
    int mySqrt(int x) {
        int start=1;
        int end=x;
        while(start<=end){
            long long mid=start + (end - start) / 2;
            if(static_cast<long long>(mid)*mid<x){
                start=mid+1;
            }
            else if(static_cast<long long>(mid)*mid>x){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
        return end;
    }
};