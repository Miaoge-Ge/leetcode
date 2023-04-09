int reverse(int x){
    if(x>2147483647||x<-2147483647)
        return 0;
    long sum=0;
    while(x){
        sum=10*sum+x%10;
        x/=10;
    }
    if(sum>2147483647||sum<-2147483647)
        return 0;
    return sum;
}
