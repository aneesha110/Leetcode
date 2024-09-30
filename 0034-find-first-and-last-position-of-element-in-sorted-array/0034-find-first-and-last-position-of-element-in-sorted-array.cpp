class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> result;
        int starting_pos=-1;
        int ending_pos=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                starting_pos=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                ending_pos=i;
                break;
            }
        }
        result.push_back(starting_pos);
        result.push_back(ending_pos);
        return result;
    }
};