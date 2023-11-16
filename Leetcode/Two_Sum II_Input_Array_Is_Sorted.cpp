class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
 int head=0;
int sum;
vector<int> result;

int tail=numbers.size()-1;
while(left!=right)
{
 sum=numbers[head]+numbers[tail];
 if(sum>target)
{
 tail=tail-1;
}
 else if(sum<target)
{
 head=head+1;
}
else{
 result.push_back(head+1);
 result.push_back(tail+1);
 break;
}
}
 return result;
        
        
    }
};
