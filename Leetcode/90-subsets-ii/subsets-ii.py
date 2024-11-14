class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        powerset=[]
        subset=[]
        i=0
        ans=self.generate_subset(i,subset,nums,powerset)
        
        return ans
    def generate_subset(self,i,subset,nums,powerset):
        
        if i==len(nums):
            hel=[]
            for i in subset:
                
                hel.append(i)
            hel.sort()    
            if hel not in powerset:
                powerset.append(hel)
            
            
            return powerset
            
        self.generate_subset(i+1,subset,nums,powerset)
        
        subset.append(nums[i])
      
        
        self.generate_subset(i+1,subset,nums,powerset)
        subset.pop()
        return powerset
        
        
