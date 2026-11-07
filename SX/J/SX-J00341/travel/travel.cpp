#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll c1,s1,c2,s2;
	char ss1,ss2;
	cin>>c1>>s1>>ss1>>c2>>s2>>ss2;
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(s1!=s2)
	{
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if((ss1=='A'&&ss2=='D')||(ss1=='A'&&ss2=='F')||(ss1=='B'&&ss2=='D')||(ss1=='B'&&ss2=='F')||(ss1=='C'&&ss2=='D')||(ss1=='C'&&ss2=='F'))
	{
		cout<<"00";
		return 0;
	}
	else if((ss1=='D'&&ss2=='A')||(ss1=='F'&&ss2=='A')||(ss1=='D'&&ss2=='B')||(ss1=='F'&&ss2=='B')||(ss1=='D'&&ss2=='C')||(ss1=='F'&&ss2=='C'))
	{
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(int(ss1)-int(ss2))==1) cout<<"1";
	else cout<<"0";
	return 0;
}