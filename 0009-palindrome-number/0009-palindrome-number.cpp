class Solution {
public:
    bool isPalindrome(int x) {
        int input=x;
         long sum=0;
         if(input<0) return false;
        while(x!=0){
       
       int r=x%10;
       sum=sum*10 + r;
       x=x/10;
    }
   
    if(input==sum) return true;
    else return false;
    }
};