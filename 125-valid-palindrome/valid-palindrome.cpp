class Solution {
public:
    bool isPalindrome(string s) {
        int right=s.size()-1;
        int left =0;
        int i=0;
        // remove lowercase and spaces

         for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }

         while(left<right){
            while(left < right && !isalnum(s[left])){
                left++;
            }

            while(left < right && !isalnum(s[right])){
                right--;
            }

            // compare characters
            if(s[left] != s[right]){
                return false;
            }

            // move pointers
            left++;
            right--;
        }
         return true;

         }
       
       

            
        
       
    
};