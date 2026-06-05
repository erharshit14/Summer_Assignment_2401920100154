class Solution {
public:
    void reverseString(vector<char>& s) {
       int s1=0,e=s.size()-1;
       while(s1<=e){
        swap(s[s1++],s[e--]);
       } 
    }
};