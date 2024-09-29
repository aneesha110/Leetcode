class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int left=j+1;
                int right=n-1;
                while(left<right){
                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum<target){
                        left++;
                    }
                    else if(sum>target){
                        right--;
                    }
                    else{
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[left]);
                        temp.push_back(nums[right]);
                        int cnt = count(result.begin(), result.end(), temp);
                        if(cnt==0)
                        {
                        result.push_back(temp);
                        }
                        temp.clear();
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};