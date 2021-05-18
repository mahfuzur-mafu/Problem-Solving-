#include <iostream>
using namespace std;
int main()
{
    int i,cnt=0;
    string str;
    while(cin>>str)
    {
        int len=str.size();
        for(i=0; i<len-1; i++)
        {
            if(str[i]==str[i+1])
            {
                str.erase(i,2);
                len=str.size();
                i=-1;
                cnt++;
            }
        }
        if(cnt % 2==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
