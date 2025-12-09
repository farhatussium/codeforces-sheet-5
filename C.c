#include <stdio.h>

int binpal(int n) {
    int a[32];
    int i=0,j;
    while(n>0){
        a[i]=n%2;
        n/=2;
        i++;
    }
    for(j=0;j<i/2;j++){
        if(a[j]!=a[i-1-j]){
            return 0;
        }
    }
    return 1;
}

int wonder(int n){
    if(n%2==0){
        return 0;
    }
    return binpal(n);
}

int main(){
    int n;
    scanf("%d",&n);
    if(wonder(n)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
