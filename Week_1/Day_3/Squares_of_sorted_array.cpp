class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int>temp;
        while(i<=j){
            temp.push_back(nums[i]*nums[i]);
            i++;
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};
