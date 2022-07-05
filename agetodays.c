#include <stdio.h>
int main()
{
    int AY,AM,AD,D;
    printf("Enter your age in year month and days: \n");
    scanf("%d%d%d",&AY,&AM,&AD);
    D=AY*365+AM*30+AD;
    printf("You have passed %d days\n",D);
    return 0;
}