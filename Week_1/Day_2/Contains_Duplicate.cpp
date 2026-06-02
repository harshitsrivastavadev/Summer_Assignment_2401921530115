// 2 methods through which we can solve it:-

//use of sorting
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
       }
       return false;
    }
};

//use of hashmap
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x :nums){
            if(mp[x]>=1){
                return true;
            }
            mp[x]++;
        }
        return false;
    }
};
