class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>c(nums.size());
        int small=0;
       for(int i=0;i<nums.size();i++){
       for(int j=0;j<nums.size();j++){
        if(j!=i && nums[j]<nums[i]){
            small++;
        }
       }
        c[i]=small;
         small=0;
       } 
       return c;
    }
};