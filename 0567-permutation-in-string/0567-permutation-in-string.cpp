class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>freq(26,0);
        for(char ch:s1){
            freq[ch-'a']++;
        }
        int count=s1.size();
        int left=0;
        for(int right=0;right<s2.size();right++){
            if(freq[s2[right]-'a']>0){
                count--;
            }
            freq[s2[right] - 'a']--;
            if(right - left + 1 > s1.size()) {

                if(freq[s2[left] - 'a'] >= 0)
                    count++;

                freq[s2[left] - 'a']++;

                left++;
            }
            if(count==0) return true;
        }
        return false;
    }
};