/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(target==nums[i]+nums[j]){
                int *array=(int *)malloc(sizeof(int)*2);
                array[0]=i;
                array[1]=j;
                *returnSize=2;
                return array;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
