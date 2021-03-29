#include <stdio.h>
int main()
{
    int n,m,o,i,j,k,s,p[3];

    scanf("%d %d %d",&n,&m,&o);

    int a[n][n],b[m][m],c[o][o];
    int x[n*2 + 2],y[m*2 + 2],z[o*2 + 2];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d",&c[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {
        x[i] = 0;
        for(j=0; j<n; j++)
        {
            x[i] += a[i][j];
        }
    }
    s = i;
    for(i=s,j=0; i<s*2; i++,j++)
    {
        x[i] = 0;
        for(k=0; k<n; k++)
        {
            x[i] += a[k][j];
        }
    }
    s = i;
    for(i=s; i<s+2; i++)
    {
        x[i] =0;
        for(k=0; k<n; k++)
        {
            x[i] += a[k][k];
        }
    }


    for(i=0; i<m; i++)
    {
        y[i] = 0;
        for(j=0; j<m; j++)
        {
            y[i] += b[i][j];
        }
    }
    s = i;
    for(i=s,j=0; i<s*2; i++,j++)
    {
        y[i] = 0;
        for(k=0; k<m; k++)
        {
            y[i] += b[k][j];
        }
    }
    s = i;
    for(i=s; i<s+2; i++)
    {
        y[i] =0;
        for(k=0; k<m; k++)
        {
            y[i] += b[k][k];
        }
    }

    for(i=0; i<o; i++)
    {
        z[i] = 0;
        for(j=0; j<o; j++)
        {
            z[i] += c[i][j];
        }
    }
    s = i;
    for(i=s,j=0; i<s*2; i++,j++)
    {
        z[i] = 0;
        for(k=0; k<o; k++)
        {
            z[i] += c[k][j];
        }
    }
    s = i;
    for(i=s; i<s+2; i++)
    {
        x[i] =0;
        for(k=0; k<o; k++)
        {
            z[i] += c[k][k];
        }
    }



    for(i=1; i<n*2+2; i++)
    {
        if(x[0]==x[i])
        {
            p[0] = 1;
        }
        else
        {
            p[0] = 0;
            break;
        }
    }

    for(i=0; i<m*2+2; i++)
    {
        if(y[0]==y[i])
        {
            p[1] = 1;
        }
        else
        {
            p[1] = 0;
            break;
        }
    }

    for(i=0; i<o*2+2; i++)
    {
        if(z[0]==z[i])
        {
            p[2] = 1;
        }
        else
        {
            p[2] = 0;
            break;
        }
    }

    for(i=0;i<3;i++)
    {
        if(p[i]==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}
