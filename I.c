#include <stdio.h>
void nTimes(int n,char c){
    for(int i=1;i<=n;i++){
        printf("%c ",c);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    char c;
    scanf("%d %c", &n, &c);
    nTimes(n,c);
    printf("\n");
    }
    
    return 0;
}