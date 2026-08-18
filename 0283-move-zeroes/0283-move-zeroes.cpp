class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[zero];
                nums[zero]=nums[i];
                nums[i]=temp;
                zero++;
            }
        }
    }
};