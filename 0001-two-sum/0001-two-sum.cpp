class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>indexes;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(indexes.find(diff)!=indexes.end()){
                return{indexes[diff],i};
            }
            indexes[nums[i]]=i;
        }
        return{};
    }
};