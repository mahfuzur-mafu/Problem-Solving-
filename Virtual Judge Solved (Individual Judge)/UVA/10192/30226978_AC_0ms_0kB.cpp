#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char arr1[1005],arr2[1005];
    int tc=0;
     while(gets(arr1))
    {
        if(arr1[0]=='#')
        {
            break;
        }
    gets(arr2);
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    int res[len2+1][len1+1];
    for(int i=0; i<len1+1; i++)
    {
        res[0][i]=0;
    }
    for(int i=0; i<len2+1; i++)
    {
        res[i][0]=0;
    }
    for(int i=1; i<len2+1; i++)
    {
        for(int j=1; j<len1+1; j++)
        {
          if(arr1[j-1]==arr2[i-1])
          {
              res[i][j]=res[i-1][j-1]+1;
          }
          else
          {
              if(res[i-1][j] >res[i][j-1])
              {
                  res[i][j]=res[i-1][j];
              }
              else
              {
                   res[i][j]=res[i][j-1];
              }
          }
        }

    }
    printf("Case #%d: you can visit at most %d cities.\n",tc+=1,res[len2][len1]);

}
return 0;
}
