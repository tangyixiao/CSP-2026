#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
char e,f;
bool g,h,i,j;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    e=(b[2]=='D'?'E':b[2]);
    f=(d[2]=='D'?'E':d[2]);
    b=b.substr(0,2);
    d=d.substr(0,2);
    g=(a==c);
    h=(g&&(b==d));
    i=(h&&((e<='C')==(f<='C')));
    j=(i&&(f-e==1));
    cout<<g<<h<<i<<j;
    return 0;
}
unsigned long long int rp=-1;