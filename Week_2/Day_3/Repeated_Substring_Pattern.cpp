class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l =n/2 ;l>=1;l--){
            if(n%l==0){
                int times=n/l;
                string p=s.substr(0,l);
                string New = "";
                while(times--){
                    New +=p;
                }
                if(New==s){
                    return true;
                }
            }
        }
        return false;
    }
};
