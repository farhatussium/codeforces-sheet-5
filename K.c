#include <stdio.h>

void shift(int a[], int n, int x){
    x %= n;
    for(int i=n-x;i<n;i++) 
    printf("%d ",a[i]);
    for(int i=0;i<n-x;i++) 
    printf("%d ",a[i]);
}

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    shift(a,n,x);
    return 0;
}
