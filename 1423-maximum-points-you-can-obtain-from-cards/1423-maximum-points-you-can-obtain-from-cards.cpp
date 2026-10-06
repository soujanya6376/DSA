class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0;
        int right=cardPoints.size()-1;
        for(int i=0;i<k;i++){
            left=left+cardPoints[i];
        }
        int max_sum=left;
        int rightsum=0;
        for(int i=k-1;i>=0;i--){
            left=left-cardPoints[i];
            rightsum=rightsum+cardPoints[right];
            if(left+rightsum>max_sum){
                max_sum=left+rightsum;
            }
            right--;
        }
        return max_sum;
    }
};