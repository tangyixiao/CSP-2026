#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e5+5;
string R1,R2,X1,X2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>R1>>R2>>X1>>X2;
	if(R1==X1) cout<<1;
	else
	{
		cout<<"0000";
		return 0;
	}
	if(R2.substr(0,2)==X2.substr(0,2)) cout<<1;
	else
	{
		cout<<"000";
		return 0;
	}
	if(R2[2]<='C'&&X2[2]<='C') cout<<1;
	else if(R2[2]>='D'&&X2[2]>='D')
	{
		cout<<11;
		return 0;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(R2[2]+1==X2[2]||X2[2]+1==R2[2]) cout<<1;
	else cout<<0;
	return 0;
}
//[100,100]