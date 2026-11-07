#include<bits/stdc++.h>
using namespace std;
string a[5];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    // cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    if(a[1]==a[3]) cout<<1;
    else cout<<0;
    if(a[1]==a[3]&&a[2][0]==a[4][0]&&a[2][1]==a[4][1]) cout<<1;
    else cout<<0;
    if(a[1]==a[3]&&a[2][0]==a[4][0]&&a[2][1]==a[4][1]&&((a[2][2]<='C'&&a[4][2]<='C')||(a[2][2]>='D'&&a[4][2]>='D'))) cout<<1;
    else cout<<0;
    if(a[1]==a[3]&&a[2][0]==a[4][0]&&a[2][1]==a[4][1]&&((a[2][2]<='C'&&a[4][2]<='C')||(a[2][2]>='D'&&a[4][2]>='D'))&&(abs(a[2][2]-a[4][2])==1||(a[2][2]=='D'&&a[4][2]=='F')||(a[2][2]=='F'&&a[4][2]=='D'))) cout<<1;
    else cout<<0;
    cout<<endl;
    return 0;
}