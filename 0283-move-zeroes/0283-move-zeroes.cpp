class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        if(nums.size()==1 && nums[0]==0)
            nums[0]=0;
        for(int next=0;next<nums.size();next++){
            if(nums[next]!=0){
                int temp=nums[start];
                nums[start]=nums[next];
                nums[next]=temp;
                start++;
            }
        }
    }
};