#include <stdio.h>
int main()
{
    int n,k=0,c,i,tmp,x;

    scanf("%d %d",&n,&c);

    for(i=n+1;;i++)
    {
        tmp = i;
        while(tmp!=0)
        {
            x = tmp%10;
            tmp /= 10;
            if(x==c)
            {
                k = i;
                break;
            }
        }
        if(k==i)
        {
            printf("%d",k);
            break;
        }
    }


}
