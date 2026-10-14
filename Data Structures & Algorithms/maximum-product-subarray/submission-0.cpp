class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int currmax=1;
        int currmin=1;
        for(int n:nums){
            int tempmax=currmax*n;
            currmax=max({n,tempmax,currmin*n});
            currmin=min({n,tempmax,currmin*n});
            res=max(res,currmax);
        }
        return res;
    }
};
