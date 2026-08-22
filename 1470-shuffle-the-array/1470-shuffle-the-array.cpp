class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result(nums.size());
        int left=0;
        for(int i=0;i<nums.size();i=i+2){
            if(n<nums.size()){
                result[i]=nums[left];
                result[i+1]=nums[n];
                n++;
                left++;
            }
        }
        return result;
    }
};