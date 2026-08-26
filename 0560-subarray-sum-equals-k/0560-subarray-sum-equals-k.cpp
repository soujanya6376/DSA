class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        vector<int>prefix(nums.size()+1);
        prefix[0]=0;
        for(int i=1;i<nums.size()+1;i++){
            prefix[i]=nums[i-1]+prefix[i-1];
        }
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<=i;j++){
                int diff=prefix[i+1]-prefix[j];
                if(diff==k){
                    c+=1;
                }
            }
        }
        return c;
    }
};