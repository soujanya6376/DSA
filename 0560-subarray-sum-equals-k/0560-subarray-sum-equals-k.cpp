class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        unordered_map<int,int>seen;
        seen[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(seen.find(sum-k)!=seen.end()){
                count+=seen[sum-k];
            }
            seen[sum]++;
        }
        return count;
    }
};