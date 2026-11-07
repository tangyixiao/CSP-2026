#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,e,f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	e=b.substr(0,2);
	f=d.substr(0,2);
	if(a==c)
		cout<<1;
	else
		cout<<0;
	if(a==c&&e==f)
		cout<<1;
	else
		cout<<0;
	if(a==c&&e==f&&(b[2]<='C'&&d[2]<='C'||b[2]>='D'&&d[2]>='D'))
		cout<<1;
	else
		cout<<0;
	if(a==c&&e==f&&(abs(b[2]-d[2])==1&&b[2]!='D'&&d[2]!='D'||b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D'))
		cout<<1;
	else
		cout<<0;
	cout<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
