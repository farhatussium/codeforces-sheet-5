#include <stdio.h>

int maxnum(int a[], int n){
    int max=a[0],i=1;
    while(i<n){
        if(a[i]>max) max=a[i];
        i++;
    }
    return max;
}

int minnum(int a[], int n){
    int min=a[0],i=1;
    while(i<n){
        if(a[i]<min) min=a[i];
        i++;
    }
    return min;
}

int isprime(int x){
    if(x<=1) return 0;
    int i=2;
    while(i*i<=x){
        if(x%i==0) return 0;
        i++;
    }
    return 1;
}

int countprime(int a[], int n){
    int c=0,i=0;
    while(i<n){
        if(isprime(a[i])) c++;
        i++;
    }
    return c;
}

int ispal(int x){
    int rev=0,t=x;
    while(t>0){
        rev=rev*10+t%10;
        t/=10;
    }
    return rev==x;
}

int countpal(int a[], int n){
    int c=0,i=0;
    while(i<n){
        if(ispal(a[i])) c++;
        i++;
    }
    return c;
}

int divisors(int x){
    int c=0,i=1;
    while(i<=x){
        if(x%i==0) c++;
        i++;
    }
    return c;
}

int maxdivnum(int a[], int n){
    int best=a[0];
    int maxd=divisors(a[0]);
    int i=1;
    while(i<n){
        int d=divisors(a[i]);
        if(d>maxd || (d==maxd && a[i]>best)){
            maxd=d;
            best=a[i];
        }
        i++;
    }
    return best;
}

int main(){
    int n,i;
    int a[100];

    scanf("%d",&n);
    i=0;
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }

    printf("The maximum number : %d\n",maxnum(a,n));
    printf("The minimum number : %d\n",minnum(a,n));
    printf("The number of prime numbers : %d\n",countprime(a,n));
    printf("The number of palindrome numbers : %d\n",countpal(a,n));
    printf("The number that has the maximum number of divisors : %d\n",maxdivnum(a,n));

    return 0;
}
