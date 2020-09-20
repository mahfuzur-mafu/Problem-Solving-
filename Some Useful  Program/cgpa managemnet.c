#include <stdio.h>
#include <string.h>
void subject()
{
    int n,m,i;
    char sub[100];
    float credit,credit1;
    float grade;
    float point;
    float sum=0;
    float sum1=0;

    printf("How Many course You have in this semester : ");
    scanf("%d",&n);

    while(n--)
    {

        printf("Enter Subject code : ");
        scanf("%s",&sub);
        printf("Enter Credit : ");
        scanf("%f",&credit);
        printf("Enter Grade : ");
        scanf("%f",&grade);

        point=credit*grade;

        printf("%s grade point : %.2f ",sub,point);
        printf("\n\n");
        sum=sum+point;

        sum1=sum1+credit;



    }

    printf("Total Point : ");
    printf("%.2f",sum);
    printf("\n\n");
    printf("Your Total Credit in this semester: ");
    printf("%.2f",sum1);
     printf("\n\n");
      printf("\n\n");


    printf("Your semester GPA result is :%.2f",sum/m);






}

int main()
{
    subject();
    return 0;
}
