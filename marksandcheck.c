// WAP to enter marks of six subject and display percentage if marks in every subject is greater than 40 and check if distinction, first division, second division third or so on

#include <stdio.h>
int main()
{
    float physics, computer, maths, english, nepali,C,percentage;
    printf("Enter the number for physics\n");
    scanf("%f", &physics);
    printf("Enter the number for computer\n");
    scanf("%f", &computer);
    printf("Enter the number for maths\n");
    scanf("%f", &maths);
    printf("Enter the number for english\n");
    scanf("%f", &english);
    printf("Enter the number for nepali\n");
    scanf("%f", &nepali);
    printf("Enter the number for C\n");
    scanf("%f", &C);


    if (physics >= 40 && computer >= 40 && maths >= 40 && english >= 40 && nepali >= 40)
    {
        percentage = ((physics + computer + maths + english + nepali + C)/600)*100;

    
        if (percentage >= 90 && percentage <= 100)
        {
            printf("Congratulations!!!You scored %f percentage and You got Distinction.",percentage);
        }
        else if (percentage < 90 && percentage >= 80)
        {
            printf("Congratulations!!!You scored %f percentage and You got First Division.",percentage);
        }
        else if (percentage < 80 && percentage >= 70)
        {
            printf("Keep it up!!!You scored %f percentage and You got Second Division.",percentage);
        }
        else if (percentage < 70 && percentage >=60)
        {
            printf("Work Harder!!!You scored %f percentage and You got Third Division.",percentage);
        }
        else
        {
            printf("Enter a valid marks!!!");
        }
     }


    else
    {
        printf("You failed the exams!!!");
    }
    return 0;
}
