class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>seen;
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
            seen[nums1[i]]=i;
        }
        for(int i=0;i<nums2.size();i++){
            if(seen.find(nums2[i])!=seen.end()){
                if(find(result.begin(),result.end(),nums2[i])==result.end()){
                    result.push_back(nums2[i]);
                }
            }
        }
        return result;
    }
};