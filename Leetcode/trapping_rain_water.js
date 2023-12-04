/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    if(height.length==1)
        { return 0
            }
    let left_max=height[0]
    let sum=0
    let res=0
    
    let right_max=height[height.length-1]
    let left=0
    let right=height.length-1
    let max_pos=right
    
    while(1!=right)
        {
            if(height[right]>right_max)
                {
                    right_max=height[right]
                    max_pos=right
                    
                    }
            right=right-1
            }
    
   res=Math.min(left_max,right_max)-height[1]
    if(res>0)
        {
            sum=sum+res
            }
    left=left+1
    for(let i=2;i<height.length-1;i++)
        {
            if(height[i-1]>left_max)
                {
                    left_max=height[i-1]
       
                    }
            if(i==max_pos)
                {
                   right=height.length-1
right_max=0
                    while(i!=right)
                        {
                           if(height[right]>right_max)
                {
                    right_max=height[right]
                    max_pos=right
                    
                    }
            right=right-1
                            
                            }
                    }
            res=Math.min(left_max,right_max)-height[i]
            
            
   if(res>0)
       {
           sum=sum+res;
           }
            
            }
    return sum
    
    
    
    
    
};
