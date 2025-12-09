#include <stdio.h>
int add(int n1,int n2){
    return n1+n2;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",add(a,b));
    return 0;
}