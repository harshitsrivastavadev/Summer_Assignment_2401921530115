class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        vector<string>a = strs;
        for(int i=0;i<strs.size();i++){
            sort(a[i].begin(),a[i].end());
        }
        for(int i=0;i<strs.size();i++){
            mp[a[i]].push_back(strs[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
