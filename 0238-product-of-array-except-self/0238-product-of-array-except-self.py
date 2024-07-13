class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length=len(nums)
        result=[]
        p=1
        z=[]
        if 0 in nums:
            for i in range(0,length):
                if nums[i]==0:
                    nums[i]=1
                    z.append(i)
            for i in range(0,length):
                p=p*nums[i]
            if len(z)>1:
                for i in range(0,length):
                    result.append(0)
            else:
                for i in range(0,length):
                    if i in z:
                        result.append(p)
                    else:
                        result.append(0)
        else:
            for i in range(0,length):
                p=p*nums[i]
            for i in range(0,length):
                result.append(int(p/nums[i]))
        return result