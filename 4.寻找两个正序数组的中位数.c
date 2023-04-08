double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int *array;
    array=(int *)malloc(sizeof(int)*(nums1Size+nums2Size));
    int arraySize=nums1Size+nums2Size;
    int i=0,j=0,k=0;
    double mid=0.0;
    while(i<nums1Size){
        array[k++]=nums1[i++];
    }
    while(j<nums2Size){
        array[k++]=nums2[j++];
    }
    for(i=0;i<arraySize;i++){
        for(j=i+1;j<arraySize;j++){
            if(array[i]>array[j]){
                int tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
    }
    if(arraySize%2==0){
        mid=(array[arraySize/2]+array[arraySize/2-1])/2.0;
    }
    else
        mid=array[arraySize/2];
    return mid;
}
