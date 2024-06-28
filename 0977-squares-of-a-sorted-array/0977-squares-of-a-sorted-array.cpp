class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        for(int i=0;i<nums.size();i++){
        int j=nums.size()-1;
        while(i!=j){
            if(nums[i]>nums[j]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j--;
            }
            else{
                j--;
            }
        }
        }
    return nums;
    }
};