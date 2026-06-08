class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=0;
        int curr_area=0;
        int k=height.size();
        while(left<right){
            int width=k-1;
            if(height[left]<=height[right]){
                curr_area=height[left]*width;
                if(curr_area>area){
                    area=curr_area;
                }
                left++;
                k--;
            }
            else{
                curr_area=height[right]*width;
                if(curr_area>area){
                    area=curr_area;
                }
                right--;
                k--;
            }
        }
        return area;
   }
};