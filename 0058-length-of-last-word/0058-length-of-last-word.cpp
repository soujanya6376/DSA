class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1;
        int c=0;
        while(l>=0){
            if(s[l]==' '){
                l--;
                continue;
            }
            else{
                c+=1;
                if(l==0 || s[l-1]==' ')
                    break;
                else
                    l--;
            }
        }
        return c;
    }
};