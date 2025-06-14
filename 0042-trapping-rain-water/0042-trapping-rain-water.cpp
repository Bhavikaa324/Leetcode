class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left= 1;
        int right= n-2;
        int lmax= height[left-1];
        int rmax= height[right+1];

        int res=0;
        while(left <= right){
            if(rmax<=lmax){
                res +=max(0,rmax-height[right]);
                rmax =max(rmax,height[right]);
                right -= 1;
            }
            else{
                res +=max(0,lmax-height[left]);
                lmax =max(lmax,height[left]);
                left += 1;
            }
        }
        return res;
    }
};