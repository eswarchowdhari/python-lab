#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,a[30],b[30];
    long int n;
    scanf("%ld %d",&n,&i);
    if(i>=0 && i<=30)
    {
        for(j=0;n>0;j++)
        {
            a[i]=n%2;
            n=n/2;
        }
        for(j=j-1,k=0;j>=0;j++)
        {
            b[k]=a[j];
            k++;
        }
        if(b[i-1] == 1)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    return 0;
}
