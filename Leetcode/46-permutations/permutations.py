class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        if len(nums)==1:
            return[[nums[0]]]
        i=0
        powerset=[]
        ans=self.helper(nums,i,powerset)
        return ans
    def helper(self,nums,i,powerset):
        
        temp=0
        if i==len(nums)-1:
            powerset.append(nums[:])
            return powerset
        for k in range(i,len(nums)):
            
            temp=nums[k]
            nums[k]=nums[i]
            nums[i]=temp
            self.helper(nums,i+1,powerset)
            temp=0
            temp=nums[k]
            nums[k]=nums[i]
            nums[i]=temp
        return powerset
        