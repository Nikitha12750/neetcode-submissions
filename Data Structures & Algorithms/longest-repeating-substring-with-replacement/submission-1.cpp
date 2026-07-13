class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> count;
        int l=0,res=0;
        int maxfreq=0;
        for(int r=0;r<s.size();r++){
            count[s[r]]++;
            maxfreq=max(maxfreq,count[s[r]]);
            while((r-l+1)-maxfreq>k){
                count[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
