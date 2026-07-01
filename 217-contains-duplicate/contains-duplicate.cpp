class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(seen.find(nums[i])!=seen.end()){
                return true;
            }
            else{
                
                seen.insert(nums[i]);
            }

        }
        return false;
    }
};