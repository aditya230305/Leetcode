class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> um = {
            {'(',1},{')',-1},
            {'{',2}, {'}', -2},
            {'[',3}, {']', -3},
        };
        stack<char> stk ;
        for(auto b: s){
            if(um[b]>0)
                stk.push(b) ;
            else{
                if(stk.empty() || um[stk.top()]+um[b] != 0)
                    return false ;
                else
                stk.pop() ;
            }
        }
        return stk.empty() ;
    }
};