#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); 
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int s11=(s1[0]-'0')*10+(s1[1]-'0');
	int s21=(s2[0]-'0')*10+(s2[1]-'0');
	char s12=s1[2],s22=s2[2];
	if (c1==c2)	cout<<1;
	else	cout<<0;
	if (c1==c2 && s11==s21)	cout<<1;
	else	cout<<0;
	if (c1==c2 && s11==s21 && (s12<='C' && s22<='C' || s12>='D' && s22>='D'))	cout<<1;
	else	cout<<0;
	if (c1==c2 && s11==s21 && (s12<='C' && s22<='C' && s22-s12==1 || s12>='D' && s22>='D'))	cout<<1;
	else	cout<<0;
	return 0;
}
	

