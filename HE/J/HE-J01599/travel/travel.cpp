#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,c,d;
    int m,n;
    cin>>a>>b>>c>>d;
    if(a[0]==c[0]&&a[1]==c[1])
        cout<<'1';
    else{
        cout<<"0000";
        return 0;
    }if(b[0]==d[0]&&b[1]==d[1])
        cout<<'1';
    else{
        cout<<"000";
        return 0;
    }m=b[2]-'C';
    n=d[2]-'C';
    if(m>0&&n>0){
        cout<<"11";
        return 0;
    }else if(m<=0&&n<=0)
        cout<<'1';
    else{
        cout<<"00";
        return 0;
    }m+=3;
    n+=3;
    if(m*n%2)
        cout<<'0';
    else
        cout<<'1';
    return 0;
}
