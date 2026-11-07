#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int m,n,x,y;
char zw1,zw2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	for(int i=0;i<=1;++i) m=m*10+(a[i]-'0');
	for(int i=0;i<=1;++i) n=n*10+(c[i]-'0');
	if(m!=n){
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=1;++i) x=x*10+(b[i]-'0');
	for(int i=0;i<=1;++i) y=y*10+(d[i]-'0');
	if(x!=y){
		cout<<"1000";
		return 0;
	}
	zw1=b[2];
	zw2=d[2];
	if(zw1>='D'&&zw2<='D'){
		cout<<"1100";
		return 0;
	}
	if(zw2>='D'&&zw1<='D'){
		cout<<"1100";
		return 0;
	}
	if(zw2-zw1!=1&&zw1-zw2!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
