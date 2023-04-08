int lengthOfLongestSubstring(char * s){
    int i,j,max=0;
    int left=0,right=0;
    int same=0;
    for(i=0;i<strlen(s);i++){
        if(left<right){
            same=0;
            for(j=left;j<right;j++){
                if(s[j]==s[right]){//有重复字母将same置1，并跳出循环
                    same=1;
                    break;
                }
            }
        }
        if(same==1){//有重复字符将left右移
            left=j+1;
        }
        max=max<(right-left+1)?(right-left+1):max;
        right++;//right右移继续判断
    }
    return max;
}
