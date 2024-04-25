class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        if(nums.size()==1)
            {
            return result;
            }
        int val;
        int index;
        
        for(int i=0;i<nums.size();i++)
            {
            val=abs(nums[i]);
 index=val-1;
 if(nums[index]<0)
     {
     result.push_back(val);
     }
  else{
      nums[index]=-nums[index];
      }
            }
        return result;
    }
}; 
