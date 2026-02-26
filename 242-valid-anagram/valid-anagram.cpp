class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>a(26,0);
        for(char c:s){
            a[c-'a']++;
        }
        for(char c:t){
            a[c-'a']--;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=0){
                return false;
            }
          
        }
        return true;
    }
};