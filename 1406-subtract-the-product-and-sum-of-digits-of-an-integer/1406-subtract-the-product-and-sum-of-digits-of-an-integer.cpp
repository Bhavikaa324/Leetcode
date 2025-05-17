class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1,result=0;
        while(n>0){
            int num=n%10;
            sum += num;
            prod *=num;
            n=n/10;
        }
         result=prod-sum;
        return result;
    }
};