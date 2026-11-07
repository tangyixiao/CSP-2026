#include<bits/stdc++.h>
using namespace ::std;
 string a1,a2,b1,b2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>a1>>a2>>b1>>b2;
    if(a1==b1)
        cout<<1;
    else
        cout<<0;
    if(a2[0]==b2[0]&&a2[1]==b2[1]&&a1==b1)
            cout<<1;
    else
        cout<<0;
    if((a2[2]>='A'&&a2[2]<='C'&&b2[2]>='A'&&b2[2]<='C'&&a2[0]==b2[0]&&a2[1]==b2[1]&&a1==b1)||(a2[2]>='D'&&a2[2]<='E'&&b2[2]>='D'&&b2[2]<='E'&&a2[0]==b2[0]&&a2[1]==b2[1]&&a1==b1))
            cout<<1;

    else
        cout<<0;
    int x,y;
    x=a2[2]-'A';
    y=b2[2]-'A';
    if((a2[2]!='C'&&b2[2]!='D'&&a2[2]!='D'&b2[2]!='C'&&abs(x-y)==1)&&a2[0]==b2[0]&&a2[1]==b2[1]&&a1==b1)
        cout<<1;
    else
        cout<<0;
    return 0;
}
