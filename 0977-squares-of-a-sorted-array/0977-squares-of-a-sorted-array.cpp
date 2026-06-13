class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int index=right;
        vector<int>ans(nums.size());
        while(left<=right){
            if(abs(nums[left])>=abs(nums[right])){
                ans[index]=nums[left]*nums[left];
                left++;
                index--;
            }
            else{
                ans[index]=nums[right]*nums[right];
                index--;
                right--;
            }
        }
        return ans;
    }
};