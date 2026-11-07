#include<bits/stdc++.h>
#define int long long
using namespace std;
char a[2],b[2],c[2],d[2],e,f;
int z[4];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[0]>>a[1]>>b[0]>>b[1]>>e>>c[0]>>c[1]>>d[0]>>d[1]>>f;
	if(a[0]==c[0]&&a[1]==c[1])z[0]=1;
	if(z[0]==1&&b[0]==d[0]&&b[1]==d[1])z[1]=1;
	if(z[1]==1&&(((e<='C')&&(f<='C'))||((e>'D')&&(f>='D'))))z[2]=1;
	if(z[2]==1&&!((f=='C'&&e=='D')||(e=='C'&&f=='D'))&&abs(e-f)==1)z[3]=1;
	for(int i=0;i<=3;i++){
		cout<<z[i];
	}
	return 0;
}
