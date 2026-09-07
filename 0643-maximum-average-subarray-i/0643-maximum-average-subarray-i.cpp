class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        int r=k-1;
        double sum=0.0;
        double max_avg;
        double avg;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            avg=sum/k;
        }
        max_avg=avg;
        while(r<nums.size()-1){
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            avg=sum/k;
            max_avg=max(max_avg,avg);
        }
        return max_avg;
    }
};