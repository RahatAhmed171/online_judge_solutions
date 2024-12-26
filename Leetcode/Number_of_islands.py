class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        
        counter=0
        m=len(grid)
        n=len(grid[0])
        for k in range(m*n):
            i=k//n
            j=k%n
            
                
                
                
            if grid[i][j]=="1":
                    
                    
                    
                    
                    counter=counter+1
                    self.dfs(grid,i,j)
                    
                    
        return counter
    
    def dfs(self,grid,i,j):
        m=len(grid)
        n=len(grid[0])
        if i<0 or j<0:
            return
        if i>=m or j>=n:
            return
        if grid[i][j]!="1":
            return 
        
           

        
        grid[i][j]="#"
        
        self.dfs(grid,i-1,j)
        self.dfs(grid,i,j-1)
        self.dfs(grid,i+1,j)
        self.dfs(grid,i,j+1)
        
        
        
                
                            
        
