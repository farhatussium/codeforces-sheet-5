#include <stdio.h>
 void rSwap(int n,int x,int y,int a[][500]){
         for (int i = 0; i < n; i++) {
        int temp = a[x][i];
        a[x][i] = a[y][i];
        a[y][i] = temp;
       }
    }
void cSwap(int n,int x,int y,int a[][500]){
         for (int i = 0; i < n; i++) {
        int temp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = temp;
       }
    }

int main() {
   int n,x,y;
    scanf("%d %d %d", &n, &x, &y);
    x--;
    y--;
    int a[500][500];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
            
    rSwap(n,x,y,a);
    cSwap(n,x,y,a);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    

    return 0;
}