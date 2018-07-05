#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,n,turn=1,dice_sum;
    x1=y1=x2=y2=0;
    scanf("%d",&n);
    while(1)
    {
        scanf("%d",&dice_sum);
        if(turn%2)
        {
            if(dice_sum%2)
            {
                x1+=dice_sum%n;
                y1+=dice_sum/n;
            }
            else
            {
                x1+=dice_sum/n;
                y1+=dice_sum%n;
            }
        }
        else
        {
            if(dice_sum%2)
            {
                x2+=dice_sum%n;
                y2+=dice_sum/n;
            }
            else
            {
                x2+=dice_sum/n;
                y2+=dice_sum%n;
            }
        }
        if(x1>n-1)
        {
            printf("player one wins");
            break;
        }
        if(x2>n-1)
        {
            printf("player two wins");
            break;
        }
        turn++;
    }
    return 0;
}

