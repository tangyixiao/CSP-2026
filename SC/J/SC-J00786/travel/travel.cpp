#include<bits/stdc++.h>
using namespace std;
string a,b,c,d; 
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(b[2]>d[2])swap(b,d);
	bool x1=(a==c),x2=(x1&&(b[0]==d[0])&&(b[1]==d[1])),x3=(x2&&((b[2]<='C')&&(d[2]<='C')||(b[2]>='D')&&(d[2]>='d')));
	cout<<x1<<x2<<x3<<(x3&&((d[2]-b[2])==1));
	return 0;
}
