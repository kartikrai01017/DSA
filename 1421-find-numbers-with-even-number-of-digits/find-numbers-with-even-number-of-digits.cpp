class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int a;
        for(int i=0;i<nums.size();i++){
            int count=0;
            a=nums[i];
            if(a==0){return 0;}
           while(a>0){
            a/=10;
           count++;
           }
            if(count%2==0){
                ans++;
            
            }
           
        }
        return ans;
    }
};