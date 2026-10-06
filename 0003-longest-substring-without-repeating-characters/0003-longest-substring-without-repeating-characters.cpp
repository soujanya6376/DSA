class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        unordered_map<char,int>hash;
        int left=0;
        int right=0;
        while(right<s.size()){
            if(hash.find(s[right])!=hash.end()){
                left=max(left,hash[s[right]]+1);
            }
            max_len=max(max_len,right-left+1);;
            hash[s[right]]=right;
            right++;
        }
        return max_len;
    }
};