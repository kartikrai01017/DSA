class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i;
        for(i=n-1;i>=0;i--){
            if(digits[i]!=9){
                int sum;
                sum =digits[i]+1;
                digits[i]=sum;
                return digits;
            }
            else{
                digits[i]=0;
                
}
if (digits.front() == 0) {
    digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};