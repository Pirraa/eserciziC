#include<stdio.h>

int main()
{
    int color=31;
    printf("Tavola pitagorica");

    for(int i=1;i<11;i++)
    {
        if(color==37)
            color=31;
        if(color==33)
            color=34;
        printf("\n");
        for(int j=1; j<11; j++)
        {
            if(i==j)
                printf("\x1b[%dm%3d\x1b[0m",33,i*j);
            else
                printf("\x1b[%dm%3d\x1b[0m",color,i*j);
        }
        color++;
    }
    printf("\n");
}