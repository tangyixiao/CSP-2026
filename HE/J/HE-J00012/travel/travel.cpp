#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string a,b,c,d;cin>>a>>b>>c>>d;
	int f1=(a==c);
	int f2=f1&&(b[0]==d[0]&&b[1]==d[1]);
	int f3=f2&&((b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D'));
	int f4=f3&&(b[2]+1==d[2]);
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
