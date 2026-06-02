class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long sum=0;
        for(int i=0;i<k;i++){
            sum += nums[i];
            }
        long MAX=sum;
        for(int i=k;i<nums.size();i++){
            sum +=nums[i];
            sum -=nums[i-k];
            MAX=max(MAX,sum);
        }
        return double(MAX)/k;
    }
};
