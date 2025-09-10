class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        mpp[0]=1;
        int presum = 0, count = 0;
        for(int i=0;i<nums.size();i++){
            presum = presum + nums[i];
            int rem = presum - k;
            count = count + mpp[rem];
            mpp[presum] += 1;
        }
        return count;
    }
};