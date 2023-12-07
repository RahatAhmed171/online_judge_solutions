/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    let m=matrix.length
    let n=matrix[0].length
    
   
        let arr = [...new Set(matrix.flat())];
          
                
                  
                    
            
    
   let mid=0
    let left=0
    let right=arr.length-1
    while(left<=right)
        {
            mid=Math.floor((left+right)/2)
            
            if(arr[mid]>target)
                {
                    right=mid-1
                    }
           else if(arr[mid]<target)
               {
                   left=mid+1
                   }
           else
           {   
               return true
               }
           
            }
    return false
    
    
};
