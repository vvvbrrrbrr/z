#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("kol-vo igrokov = ");
    int n, i, j, k=1;
    scanf("%d", &n);
    char r[n][10];
    for(i=0; i<n; i++)
        scanf("%s", r[i]);
    printf("\n");
    int* a;
    a = (int*) calloc(n, sizeof(int));
    int* b;
    b = (int*) calloc(n, sizeof(int));
    do
    {
        for(i=0; i<n; i++)
        {
            printf("%s ", r[i]);
            scanf("%d", &j);
            if (j==0)
                b[i]++;
            else b[i]=0;
            if (b[i]==3)
            {
                b[i]=0;
                j=-1000;
            }
            a[i]=a[i]+j;
            if (a[i]>10000)
                k=0;
        }
        for(j=0; j<(5*n+5); j++)
            printf("**");
        printf("\n");
        for(i=0; i<n; i++)
            printf("%10s", r[i]);
        printf("\n");
        for(i=0; i<n; i++)
            printf("%10d", a[i]);
        printf("\n");
        for(j=0; j<(5*n+5); j++)
            printf("**");
        printf("\n");
    }
    while (k);
    return 0;
}
