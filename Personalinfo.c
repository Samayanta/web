#include <stdio.h>
int main()
{
    float S,TA,DA,T,NS;
    printf("Enter your salary: \n");
    scanf("%f",&S);
    TA=(10.0/100)*S;
    DA=(12.0/100)*S;
    T=(15.0/100)*S;
    NS=S-(TA+DA+T);
    printf("Net salary= %f",NS);
    return 0;
}