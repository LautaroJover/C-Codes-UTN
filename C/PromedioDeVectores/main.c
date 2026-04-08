#include <stdio.h>
#define n 5
int main()
{
    int v[n];
    float a = 0;
    float prom;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
        a=a+v[i];
    }
    prom = a/n;
    printf("%f",prom);
    return 0;
}
