class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        int sum=0;
        vector<int>n_arr;
        while(left<right){
            sum=numbers[left]+numbers[right];
            if(sum<target)
                left++;
            else if(sum>target)
                right--;
            else{
                n_arr.push_back(left+1);
                n_arr.push_back(right+1);
                return n_arr;
            }
        }
        return{};
    }
};