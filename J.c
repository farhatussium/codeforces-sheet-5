#include <stdio.h>

double avg(int n, double a[]) {
    double s=0;
    for(int i=0;i<n;i++)
    s+= a[i];
    return s / n;
}

int main() {
    int n;
    scanf("%d", &n);
    double a[n];
    for(int i=0;i<n;i++) 
    scanf("%lf", &a[i]);
    printf("%.7f\n",avg(n, a));
    return 0;
}
