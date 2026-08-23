class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int lsum,rsum;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                lsum=0;
                rsum=prefix[nums.size()-1]-prefix[i];
            }
            else if(i==nums.size()-1){
                lsum=prefix[i-1];
                rsum=0;
            }
            else{
                rsum=prefix[nums.size()-1]-prefix[i];
                lsum=prefix[i-1];
            }
             
            if(lsum==rsum){
                return i;
             }
        }
        return -1;
    }
};