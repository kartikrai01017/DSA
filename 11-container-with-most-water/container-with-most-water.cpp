class Solution {
public:
    int maxArea(vector<int>& height) {
        // declaring variable
        int n= height.size();
        int a =0;
        int b =n-1;
        int ans=0;
        int mag;
        while(a<b){
        
        if(height[a]<height[b]){
            mag=height[a];
        }
        else{
            mag=height[b];
        }
        
    
         int pos=b-a;

       if(height[a]<height[b]){
        a++;
       }
       else{
        b--;
       }
       
          
        ans=max(ans,mag*pos);
}
        
    
        return ans;
    }
    
};