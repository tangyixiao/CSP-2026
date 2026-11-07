#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,c,d;cin>>a>>b>>c>>d;
    int x=1;
    printf("%d",x=(a==c ? 1 : 0));
    printf("%d",x=(x && b[0]==d[0] && b[1]==d[1] ? 1 : 0));
    printf("%d",x=(x && ((b[2]<='C' && d[2]<='C') || (b[2]>='D' && d[2]>='D')) ? 1 : 0));
    printf("%d",x=(x && abs(b[2]-d[2])==1 ? 1 : 0));
    return 0;
}