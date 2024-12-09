class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        comb=[]
        
        res=[]
        pos=[]
        candidates.sort()
        
        #for i in range(len(candidates)):
        
        summation=sum(candidates)
        if summation<target:
            return []
        sums=0
            
        comb=self.helper(candidates,target,sums,res,comb,pos)
       
        return comb

    def helper(self,candidates,target,sum,res,comb,pos):
        for i in range(len(candidates)):
            if i in pos:
                continue
            if i > 0 and candidates[i] == candidates[i - 1] and i - 1 not in pos:
                continue
       
           
            sum=sum+candidates[i]
            if sum<target:
                pos.append(i)
                res.append(candidates[i])
                self.helper(candidates,target,sum,res,comb,pos)
            elif sum>target:
                return comb
            else:
                res.append(candidates[i])
                pos.append(i)
                arr=res[:]
                arr.sort()
                
                if arr not in comb:
                    
                        comb.append(arr[:])
                    
            sum=sum-candidates[i]
            res.pop()
            pos.pop()
        return comb