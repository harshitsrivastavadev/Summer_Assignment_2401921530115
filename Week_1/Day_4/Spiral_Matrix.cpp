class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rs=0;
        int re=matrix.size()-1;
        int cs=0;
        int ce=matrix[0].size()-1;
        vector<int>v;
        while(rs<=re && cs<=ce){
            for(int i=cs;i<=ce;i++){
                v.push_back(matrix[rs][i]);
            }
            rs++;
            if(rs>re || cs>ce) break;
            for(int i=rs;i<=re;i++){
                v.push_back(matrix[i][ce]);
            }
            ce--;
             if(rs>re || cs>ce) break;
            for(int i=ce;i>=cs;i--){
                v.push_back(matrix[re][i]);
            }
            re--;
             if(rs>re || cs>ce) break;
            for(int i=re;i>=rs;i--){
                v.push_back(matrix[i][cs]);
            }
            cs++;
        }
        return v;
    }
};
