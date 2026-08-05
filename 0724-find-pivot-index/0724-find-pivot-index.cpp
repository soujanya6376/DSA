class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot=0;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
        }
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            int rsum=tot-lsum-nums[i];
            if(rsum==lsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};