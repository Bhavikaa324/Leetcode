class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int ll=nums[i];
            for(int j=i;j<n;j++){
               ll=gcd(ll,nums[j]);
               if(ll==k) count++;

               
            }}
        
        return count;        
    }
};