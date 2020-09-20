#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int flag = 1;
    for(int i = 0 ; i<s.size() ; i++ ){
        if((s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') || (s[i]=='w' && s[i+1]=='u' && s[i+2]=='b')){
            i+=2;
            if(!flag){
                cout<<" ";
            }
        }
        else{
            flag = 0;
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
