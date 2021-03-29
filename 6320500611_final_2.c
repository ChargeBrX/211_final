#include <stdio.h>
int main()
{
    int n,i,max,x=0;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(x<a[i])
        {
            x = a[i];
        }
    }



    int b[x];

    for(i=0;i<x;i++)
    {
        b[i] = 0;
    }

    for(i=0;i<n;i++)
    {
        b[a[i]-1]++;
    }

    max = b[0];
    for(i=1;i<x;i++)
    {
        if(max<b[i])
        {
            max = b[i];
        }
    }

    for(i=0;i<x;i++)
    {
        if(b[i]>0&&b[i]==max)
        {
            printf("%d ",i+1);
        }
    }

    return 0;
}
