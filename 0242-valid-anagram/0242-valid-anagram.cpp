class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>seens;
        unordered_map<char,int>seent;
        if(t.length()!=s.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            seens[s[i]]++;
             seent[t[i]]++;
        }
        for(int i=0;i<t.length();i++){
           if(seens[s[i]]!=seent[s[i]]){
            return false;
           }
        }
        return true;
    }
};