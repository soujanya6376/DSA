int* twoSum(int* nums,int size,int target,int* ret_size){
    for(int i=0;i<size;i++){
        int d=target-nums[i];
        for(int j=i+1;j<size;j++){
            if(nums[j]==d)
            {
                int* res=(int*)malloc(2*sizeof(int));
                res[0]=i;
                res[1]=j;
                *ret_size=2;
                return res;
            }
        }
    }
    *ret_size=0;
    return NULL;
}