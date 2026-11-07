#include<bits/stdc++.h>
using namespace std;
struct seat{
	int id;
	int pos;
};
seat a[20];

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);

	int a=0,b=0,c=0,d=0;
	char r,x;

	string s;
	string ans="";
	getline(cin,s);

	int le=s.size();
	r=s[5];x=s[12];

	if (s[0]=='0') a=s[1]-'0';
	else {a=10+(s[1]-'0');}

	if (s[3]=='0') b=s[4]-'0';
	else {b=10+(s[4]-'0');}

	if (s[7]=='0') c=s[8]-'0';
	else {c=10+(s[8]-'0');}

	if (s[10]=='0') d=s[11]-'0';
	else {d=10+(s[11]-'0');}


	if (a==c) ans+='1';
	else ans+='0';

	if (b==d) ans+='1';
	else ans+='0';

	if (r>='D'&& x>='D' || r<'D'&&x<'D')ans+='1';
	else ans+='0';

	int m=abs(r-x);
	if (m==1) ans+='1';
	else ans+='0';

	cout<<ans;
	return 0;
}
