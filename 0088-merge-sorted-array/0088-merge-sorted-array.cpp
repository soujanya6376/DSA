class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int length=m+n-1;
        int n1=m-1;
        int n2=n-1;
        while(n1!=-1 && n2!=-1){
            if(nums1[n1]>=nums2[n2]){
                nums1[length]=nums1[n1];
                n1--;
                length--;
            }
            else{
                nums1[length]=nums2[n2];
                n2--;
                length--;
            }
        }
        while(n2>=0){
            nums1[length]=nums2[n2];
            n2--;
            length--;
        }

    }
};