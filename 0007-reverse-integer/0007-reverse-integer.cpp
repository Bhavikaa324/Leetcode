class Solution {
public:
    int reverse(int x) {
        long sum=0;
        while(x!=0){
       
       int r=x%10;
       sum=sum*10 + r;
       x=x/10;
    }
    if(sum>INT_MAX || sum<INT_MIN) return 0;

    return sum;}
};