class Solution {
public:
//kartik
    int searchInsert(vector<int>& nums, int target) {
        int start,end,mid;
        start=0;
        end=nums.size()-1;
        mid=0;

       
       
               
       while( start<=end){
      mid= start + (end - start) / 2;
       if(nums[mid]==target){
        return mid;
       }
      else if(target>nums[mid]){
        start=mid+1;
      }
      else{
        end =mid-1;
      }

       

       }
       
       return start;
    }
};