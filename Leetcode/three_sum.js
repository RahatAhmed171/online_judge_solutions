/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    
   
    let sum = 0;
    let myMap = new Map();
    let my2DVector = []     

    nums.sort((a, b) => a - b);

    for (let i = 0; i < nums.length-2; i++) {
        
            

        
        let j = i+1
        let k = nums.length - 1;

        while (j <k) {
            
               
           
            
              
           

            let tot =nums[i]+ nums[j] + nums[k];

            if (tot < 0) {
                j = j + 1;
            } else if (tot > 0) {
                k = k - 1;
            } else {
                let triplets = [nums[i], nums[j], nums[k]];
                triplets.sort((a, b) => a - b);
                

                if (!myMap.has(triplets.toString())) {
                    
                
                    my2DVector.push(triplets);
                    myMap.set(triplets.toString(), "hu");
                }
                j++;
                k--;

               
            }
        }
    }

    return my2DVector;
}






    
