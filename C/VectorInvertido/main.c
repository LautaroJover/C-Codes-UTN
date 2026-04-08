#include <stdio.h>
#include <conio.h>
#define n 8
int main()
{
    int menor;
    int mayor;
    int v[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
    for(i=n-1;i!=-1;i--)
    {
        printf("[%d] ", v[i]);
    }
    getch();
    return 0;
}
