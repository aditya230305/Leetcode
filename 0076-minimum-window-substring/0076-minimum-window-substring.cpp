class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(128,0);
        for(char ch:t){
            freq[ch]++;
        }
        int left=0;
        int count =t.size();
        int start =0;
        int minlen=INT_MAX;
        for(int right=0;right<s.size();right++){
            if(freq[s[right]]>0){
                count--;
            }
            freq[s[right]]--;
            while(count==0){
                   if(right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    start = left;
                }
                freq[s[left]]++;

                if(freq[s[left]] > 0)
                    count++;

                left++;

            }
        }
        return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};