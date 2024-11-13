class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        comb=[]
        sum=[]
        res=[]
        candidates.sort()
        for i in candidates:
            if i==target:
                comb.append([i])
        for i in candidates:
            sum=i
            res=[sum]
            comb=self.helper(candidates,target,sum,res,comb)
       
        return comb

    def helper(self,candidates,target,sum,res,comb):
        for i in candidates:
            sum=sum+i
            if sum<target:
                res.append(i)
                self.helper(candidates,target,sum,res,comb)
            elif sum>target:
                return comb
            else:
                res.append(i)
                arr=res[:]
                arr.sort()
                if arr not in comb:
                    comb.append(arr[:])
            sum=sum-i
            res.pop()
        return comb

