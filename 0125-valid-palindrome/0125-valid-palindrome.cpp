class Solution {
public:
    bool isPalindrome(string s) {
       string c="";
       for(char ch:s){
        if(isalnum(ch)){
           c+=tolower(ch); 
        }
       }
       int low=0; int high=c.size()-1;
       while(low<=high){
        if(c[low]!=c[high]) return false;
        low++;
        high--;
       }
       return true;
    }
};