#include <stdio.h>
int distinct(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        int unique=1;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
              unique=0;
              break;
            }
        }
        if(unique==1){
            c++;
        }
    }
    return c;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",distinct(a,n));
   
    return 0;
}