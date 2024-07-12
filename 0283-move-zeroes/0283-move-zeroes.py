class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i=0
        j=1
        while(j<len(nums)):
            if(nums[i]==0 and nums[j]!=0):
                temp=nums[i]
                nums[i]=nums[j]
                nums[j]=temp
                i+=1
                j+=1
            elif(nums[i]==0 and nums[j]==0):
                j+=1
            else:
                j+=1
                i+=1