#include <stdio.h>
int main()
{
    int n,m,o,i,j,k,s;

    scanf("%d %d %d",&n,&m,&o);

    int a[n][n],b[m][m],c[o][o];
    int x[n*2 + 2],y[m*2 + 2],z[o*2 + 2];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<n;i++)
    {
        x[i] = 0;
        for(j=0;j<n;j++)
        {
           x[i] += a[i][j];
        }
    }
    s = i;
    for(i=s,j=0;i<s*2;i++,j++)
    {
        x[i] = 0;
        for(k=0;k<n;k++)
        {
            x[i] += a[k][j];
        }
    }

    for(i=0;i<n*2;i++)
    {
        printf("%d ",x[i]);
    }




}
