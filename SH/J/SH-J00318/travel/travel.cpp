#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+10;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	#endif
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else if(s1[0]!=s2[0]||s1[1]!=s2[1]) cout<<"1000";
	else
	{
		char n1=s1[2],n2=s2[2];
		if((n1<='C'&&n2>'C')||(n1>'C'&&n2<='C')) cout<<"1100";
		else
		{
			if(n1>n2) swap(n1,n2);
			if(n1=='A'&&n2=='B'||
			   n1=='B'&&n2=='C'||
			   n1=='D'&&n2=='F') cout<<"1111";
			else cout<<"1110";
		}
	}
	return 0;
}

