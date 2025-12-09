#include <stdio.h>

long long power(long long x,int n){
    long long r=1;
    for(int i=0;i<n;i++){
        r*=x;
    }
    return r;
}

int main(){
    int x,n;
    long long s=0;
    scanf("%d %d",&x,&n);
    for(int i=0;i<=n;i+=2){
        if(i==0) 
        s+=power(x,0)-1;
        else 
        s+=power(x,i);
    }
    printf("%lld\n",s);
    return 0;
}