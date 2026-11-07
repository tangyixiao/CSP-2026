#include<bits/stdc++.h>
using namespace std;
string a,a1,b,b1;
int x=0,y=0,z=0,q=0;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>a1>>b>>b1;
    for(int i=0;i<2;i++){
        if(a[i]!=b[i]){
            x++;
        }
    }
    if(x==0){
        cout<<1;
    }
    if(a1[0]==b1[0]&&a1[1]==b1[1]){
            cout<<1;
    }
    else{
        cout<<0;
    }
    if(a1[2]<='C'&&b1[2]<='C'){
        cout<<1;
    }
    else if(a1[2]<='D'&&b1[2]<='D'){
        cout<<1;
    }
    else{
        cout<<0;
    }
    if(a1[2]!='C'&&b1[2]!='D'||a1[2]!='D'&&b1[2]!='C'){
        if(a1[2]-1==b1[2]||a1[2]==b1[2]){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    else{
        cout<<0;
    }
    return 0;
}
