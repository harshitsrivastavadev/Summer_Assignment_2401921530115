class Solution {
public:
    void reverseWord(string &s,int start,int end) {
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    string reverseWords(string s) {
        int start = 0;
        for (int i=0;i<= s.length();i++){
            if (i == s.length() || s[i]==' ') {
                reverseWord(s,start,i-1);
                start=i+1;
            }
        }

        return s;
    }
};
