#include <stdio.h>

int main() {
  int p;
    while(1)
    {
        scanf("%d",&p);
        if(p==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }

    return 0;
}
