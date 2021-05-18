#include <stdio.h>
#include <string.h>
int main() 
{

  char st1;
  char st2[100];
  char st3[100];
  scanf("%c",&st1);
  scanf("%s",st2);
   scanf("%*[\n]%[^\n]",st3);

  printf("%c\n",st1);
  printf("%s\n",st2);
  printf("%s\n",st3);



    return 0;
}
