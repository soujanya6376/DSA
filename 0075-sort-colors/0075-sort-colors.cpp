class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int color=0;
        while(color<=2){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==color){
                    int temp=nums[left];
                    nums[left]=nums[i];
                    nums[i]=temp;
                    left++;
                }
            }
            color++;
        }
    }
};