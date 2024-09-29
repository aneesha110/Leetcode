class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        if(n==3){
            for(int i=0;i<n;i++){
                sum+=nums[i];
            }
            return sum;
        }
        int diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                if(abs(target-(nums[i]+nums[left]+nums[right]))<diff){
                    sum=nums[i]+nums[left]+nums[right];
                    diff=abs(target-sum);
                }
                if (nums[i]+nums[left]+nums[right]< target) {
                    left++;
                } else if (nums[i]+nums[left]+nums[right]> target) {
                    right--;
                } else {
                    return target;
                }
            }
        }
        return sum;
    }
};