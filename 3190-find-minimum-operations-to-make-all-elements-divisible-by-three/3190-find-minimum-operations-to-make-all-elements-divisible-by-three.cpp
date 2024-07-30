class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int no_ops=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){no_ops++;}
        }
        return no_ops;
    }
};