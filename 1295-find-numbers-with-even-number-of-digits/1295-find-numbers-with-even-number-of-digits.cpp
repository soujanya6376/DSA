class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int e=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                e+=1;
            }
            if(e%2==0)
                count+=1;
        }
        return count;
    }
};