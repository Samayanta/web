#include <stdio.h>
int main()
{
    int AY,AM,AD,D,RD;
    printf("Enter your age in year month and days: \n");
    scanf("%d",&D);
    AY=D/365;
    RD=D%365;
    AM=RD/30;
    AD=RD%30;
    printf("Year %d \n",AY);
    printf("month %d \n",AM);
    printf("Days %d \n",AD);
    return 0;
}