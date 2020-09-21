#include <bits/stdc++.h>

int main()
{

    double N1,N2,N3,N4,N5,M,A;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    M=(N1*2+N2*3+N3*4+N4*1)/10;
    printf ("Media: %.1lf\n",M);
    if(M>=7)
    {
        printf ("Aluno aprovado.\n");
    }
    else if(M<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(M>=5 && M<=6.9)
    {
        printf ("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        A=(N5+M)/2;
        if(A>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if(A<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf ("Media final: %.1lf\n",A);
    }


    return 0;
}
