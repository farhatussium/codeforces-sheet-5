#include <stdio.h>
void zero(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
}

int main() {
     int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    zero(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}