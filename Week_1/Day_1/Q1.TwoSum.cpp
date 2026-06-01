class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   int n=nums.size();
   int ans1=0,ans2=0;
 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
if(nums[i]+nums[j]==target){
  ans1=i;
  ans2=j;
}
  }
}
return {ans1,ans2};
}   
    
};