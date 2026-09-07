class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0,r=k-1;
        int count=0;
        for(int i=0;i<k;i++){
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
                count++;
        }
        int max_count=count;
        while(r<s.length()-1){
            if((s[l]=='a')||(s[l]=='e')||(s[l]=='i')||(s[l]=='o')||(s[l]=='u')){
                count--;
            }
            r++;
            l++;
            if((s[r]=='a')||(s[r]=='e')||(s[r]=='i')||(s[r]=='o')||(s[r]=='u'))
                count++;
            max_count=max(max_count,count);
        }
        return max_count;
    }
};