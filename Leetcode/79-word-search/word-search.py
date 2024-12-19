class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        flattened = [element for row in board for element in row]
        for i in word:
            if i not in flattened:
                return False
        result=False
        for i in range(len(board)):

            for j in range(len(board[0])):
                if board[i][j]==word[0]:
                    res=[]
                    pos=[]
                    z=0
                    exist=False
                    result=self.helper(board,word,i,j,word[0],z,res,pos,exist)
                   
                    if result==True:
                        return result
                    
        return result
                    
                    
                        
        
      
     



    def helper(self,board,word,i,j,mychar,z,res,pos,exist):
        n=len(board)
        m=len(board[0])
        if i<0 or j<0:
            return False
        if i>=n or j>=m:
            return False
        if board[i][j]!=mychar:
            return False
        if [i,j] in pos:
            return False
        res.append(board[i][j])
        pos.append([i,j])
        if z==len(word)-1:
            exist=True
            return exist
        r1=self.helper(board,word,i-1,j,word[z+1],z+1,res,pos,exist)
        r2=self.helper(board,word,i+1,j,word[z+1],z+1,res,pos,exist)
        r3=self.helper(board,word,i,j-1,word[z+1],z+1,res,pos,exist)
        r4=self.helper(board,word,i,j+1,word[z+1],z+1,res,pos,exist)
        res.pop()
        pos.pop()
        return r1 or r2 or r3 or r4
