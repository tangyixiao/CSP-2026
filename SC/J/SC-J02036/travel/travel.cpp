#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    cout<<(a==c);
    cout<<(a==c&&b[0]==d[0]&&b[1]==d[1]);
    cout<<(a==c&&b[0]==d[0]&&b[1]==d[1]&&((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C')));
    cout<<(a==c&&b[0]==d[0]&&b[1]==d[1]&&((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C'))&&(b[2]-d[2]==1||d[2]-b[2]==1||(b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')));
}