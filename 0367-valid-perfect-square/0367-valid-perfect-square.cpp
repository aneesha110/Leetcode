class Solution {
public:
    bool isPerfectSquare(int num) {
        bool res=false;
        int start=1;
        int end=num;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(num%mid==0 && mid==num/mid){res=true;}
            if(mid<num/mid){start=mid+1;}
            else{end=mid-1;}
        }
        return res;
    }
};