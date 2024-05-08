class Solution {
public:
    int reverse(int x) {
        int n=abs(x);
        long answer=0;
        int i=0;
        while(n!=0){
            int digit=n%10;
            if(answer*10+digit<pow(2,31)-1){
            answer=answer*10+digit;
            }
            else
            {
                return 0;
            }
            n=n/10;
            i++;
        }
        if(x<0){
            return -1*answer;
        }
        else{
            return answer;
        }
    }
};