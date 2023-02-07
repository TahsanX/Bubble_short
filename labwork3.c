#include <stdio.h>

int main()
{
    int a,sum1=0,cnt1=0,cnt2=0,sum2=0,cnt=0,x,y=0;
    char c;
    while (c!='q')
    {
        scanf("%d%c",&a,&c);
        cnt++;
        if (a>0)
        {
            sum1+=a;
            cnt1++;
        }
        if (a<0)
        {
            x=cnt-1-cnt1;
            if (sum1>=sum2)
            {
                cnt2=cnt1;
                sum2=sum1;
                sum2=sum1;
                sum1=0;
                cnt=0;
                y=x;
                x=0;

            }
            
        }
        
        
    }
    printf("Length of LPS: %d\nSum of LPS: %d\nstarting position: %d\n",cnt2,sum2,y);
    return 0;
}



