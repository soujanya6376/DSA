class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int start1=0;
        int start2=0;
        string n="";
        while(start1<word1.length() && start2<word2.length()){
            n+=word1[start1];
            n+=word2[start2];
            start1++;
            start2++;
        }
        if(start1>=word1.length()){
            for(int i=start2;i<word2.length();i++){
                n+=word2.at(i);
            }
        }
        else{
            for(int i=start1;i<word1.length();i++){
                n+=word1.at(i);
            }
        }
        return n;
    }
};