class Solution {
public:
    bool isPalindrome(string s) {
        string news="";
        for(char i:s){
            if(isalnum(i)){
                news+=tolower(i);
            }
        }
        int left=0;
        int right=news.length()-1;
        while(left<right){
            if(news[left]==news[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};