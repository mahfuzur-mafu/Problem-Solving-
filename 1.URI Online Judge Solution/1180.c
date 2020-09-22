#include <stdio.h>
int main()
{
   int i,N, p, m;
    scanf("%d", &N);
    int X[N];
    for(i=0; i<N; i++)
        scanf("%d", &X[i]);
    m=X[0];
    for(i=1; i<N; i++)
    {
        if(m>X[i])
        {
            m=X[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", m, p);
    return 0;
}

