class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
      int left_candies= candies;
      int x=1;
      int n =num_people;
      vector<int>arr(n);
      for(int i =0;i<n*2;i++){
       // chnge back i to 0
        if(i>n-1){
            i=0;
        }
        
        //check the end situation
        if(left_candies<=x){
            arr[i]=left_candies+arr[i];
            return arr;
        }
        else{
            arr[i]=x+arr[i];
        }
        // candies left
        left_candies =left_candies-x;
        x++;
         
      } 
      return arr; 
    }
};