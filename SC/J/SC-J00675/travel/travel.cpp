#include <bits/stdc++.h>
using namespace std;
int a,b;
string c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a!=b) return cout<<"0000",0;
	int cnt=c[0]-'0';
	cnt=cnt*10+(c[1]-'0');
	int sum=d[0]-'0';
	sum=sum*10+(d[1]-'0');
	if(cnt!=sum) return cout<<"1000",0;
	bool p=false,q=false;
	if(c[2]>='A'&&c[2]<='C') p=true;
	if(d[2]>='A'&&d[2]<='C') q=true;
	if(p!=q) return cout<<"1100",0;
	int h=c[2]-'A';
	int j=d[2]-'A';
	if(abs(h-j)!=1) return cout<<"1110",0;
	cout<<"1111";
	return 0;
}