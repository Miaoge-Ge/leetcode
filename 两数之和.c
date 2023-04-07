int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *array=(int*)malloc(sizeof(int)*2);//申请内存空间
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(target==nums[i]+nums[j]){
                array[0]=i;
                array[1]=j;
                *returnSize=2;
                return array;
            }
        }
    }
    return;
}
