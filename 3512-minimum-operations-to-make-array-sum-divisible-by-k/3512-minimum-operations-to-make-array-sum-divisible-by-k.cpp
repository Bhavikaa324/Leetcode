class Solution {
public:
int sun(vector<int>& arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}
    int minOperations(vector<int>& nums, int k) {
      int sum=sun(nums);
      int rem=sum%k;
      if(rem==0){
        return 0;
      }
     return rem;     
    }
};