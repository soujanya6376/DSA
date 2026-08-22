class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result(nums.size());
        int right=n;
        int left=0;
        for(int i=0;i<nums.size();i=i+2){
            if(right<nums.size()){
                result[i]=nums[left];
                result[i+1]=nums[right];
                right++;
                left++;
            }
        }
        return result;
    }
};