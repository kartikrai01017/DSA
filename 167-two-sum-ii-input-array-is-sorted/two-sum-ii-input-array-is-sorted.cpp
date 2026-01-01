class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0,r=n-1;
       vector<int> vec(2); // Create vector with size 2
        while(l!=r){
            if(target==numbers[l]+numbers[r]){
               
    vec[0] =l+1;
    vec[1] = r+1;
    return vec; 
            }
            if(numbers[l]+numbers[r]<target){
                l++;
            }
            else{
                r--;
            }
        }
        
        return vec;
    }
};