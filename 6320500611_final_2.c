#include <stdio.h>
int main()
{
    int n,i,max,x,j;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i]<a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }

    int b[a[n-1]];

    for(i=0;i<a[n-1];i++)
    {
        b[i] = 0;
    }

    for(i=0;i<n;i++)
    {
        b[a[i]-1]++;
    }

    max = b[0];
    for(i=1;i<a[n-1];i++)
    {
        if(max<b[i])
        {
            max = b[i];
        }
    }

    for(i=0;i<a[n-1];i++)
    {
        if(b[i]>0&&b[i]==max)
        {
            printf("%d ",i+1);
        }
    }





    return 0;
}
