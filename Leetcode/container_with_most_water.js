/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    
    
    let maxi=0
    let res=0
    let left=0;
    let lowest=0
    let right=height.length-1
    while(left<right)
        {
            if(height[left]<height[right])
                {
                    lowest=height[left]
  distance=Math.abs(left-right)
                    
 left=left+1
                    }
            else if(height[left]>height[right]){
               lowest=height[right]
    distance=Math.abs(left-right)
    right=right-1            
                }
  else{
      lowest=height[left]
      distance=Math.abs(left-right)
      left=left+1
      right=right-1
      }
     res=lowest*distance 
     if(res>maxi)
         {
            maxi=res 
             }
            
            }
    return maxi
    
};
