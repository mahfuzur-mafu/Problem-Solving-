#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for(i=1;i<n;i++){
        if(i%2==0){
            printf("I love  that ");
        }
        else{
            printf("I hate  that ");
        }
    }
    if(n%2==1){
        printf("I hate it\n");
    }
    if(n%2==0){
        printf("I love it\n");
    }
    return 0;
}
