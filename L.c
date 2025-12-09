#include <stdio.h>

void concat(int n,int a[],int b[],int c[]) {
    for(int i=0;i<n;i++){
        c[i]=b[i];
    }
    for(int i=0;i<n;i++){
        c[n+i]=a[i];
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[2*n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &b[i]);
    }
    concat(n, a, b, c);
    for(int i=0;i<2*n;i++){
        printf("%d ", c[i]);
    }

    return 0;
}