#include <stdio.h>

int min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int max(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int mn=min(a,n);
    int mx=max(a,n);
    printf("%d %d\n",mn,mx);
    return 0;
}