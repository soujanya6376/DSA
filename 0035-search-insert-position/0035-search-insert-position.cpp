class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,n=nums.size()-1;
        int mid;
        while(l<=n){
            mid=(l+n)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target)
                n=mid-1;
            else if(nums[mid]<target)
                l=mid+1;
        }
        return l;
    }
};