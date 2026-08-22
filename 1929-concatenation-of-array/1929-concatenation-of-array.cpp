class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>result(nums.size()*2);
        int j=0;
        int l=nums.size()-1;
        for(int i=0;i<nums.size()*2;i++){
            result[i]=nums[j];
            j++;
            if(j>l){
                j=0;
            }
        }
        return result;
    }
};