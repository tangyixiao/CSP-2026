#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("teavel.in","r",stdin);
    freopen("teavel.out","w",stdout);
    int a,b;
    string c,d;
    cin>>a>>c>>b>>d;
    if(a==b){
        cout<<'1';
    }
    else{
        cout<<'0';

    }
    if(c[1]==d[1]&&c[2]==d[2]){
        cout<<'1';
    }
    else{
        cout<<'0';
    }
    if(c[3]<='C'&&d[3]<='C'){
        cout<<'1';
    }
    else if(c[3]>'C'&&d[3]>'C'){
        cout<<'1';
    }
    else{
        cout<<'0';
    }
    if(c[3]+1==d[3]){
        cout<<'1';
    }
    else{
        cout<<'0';
    }
    return 0;
}
