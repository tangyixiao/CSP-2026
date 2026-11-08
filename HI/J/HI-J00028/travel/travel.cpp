#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0); 
	cin.tie(0);
	cout.tie(0);
	string a;
	string b;
	string cs;
	string cx;
	cin>>cs>>a>>cx>>b;
	bool flag1=0;
	if(a[2]=='F')a[2]='E';
	if(b[2]=='F')b[2]='E';
	if(cs==cx){
		cout<<1;
		flag1=1;
	}
	else cout<<0;
	if(a[0]==b[0]&&a[1]==b[1]&&flag1==1)cout<<1;
	else cout<<0;
	if((a[2]<'D'&&b[2]<'D')&&(a[0]==b[0]&&a[1]==b[1])&&flag1==1||(a[2]>'C'&&b[2]>'C')&&(a[0]==b[0]&&a[1]==b[1])&&flag1==1)cout<<1;
	else cout<<0;
	if(a[0]==b[0]&&a[1]==b[1]&&abs(a[2]-b[2])==1&&a[2]!='C'&&a[2]!='D'&&flag1==1)cout<<1;
	else cout<<0;
	return 0;
}

