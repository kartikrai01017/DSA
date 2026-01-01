class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int n=nums.size();
       vector<int> prenum(n);
       prenum[0]=nums[0];
       for(int i=1;i<n;i++){
        prenum[i]=nums[i]+prenum[i-1];
       }
       return prenum;
    }
};