#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,sa,cb,sb;
	cin>>ca>>sa>>cb>>sb;
	if(ca != cb)
	{
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	if(! (sa[0] == sb[0] && sa[1] == sb[1]))
	{
		cout<<"000";
		return 0;
	}
	cout<<'1';
	if(sa[2] <= 'C' && sb[2] >='D')
	{
		cout<<"00";
		return 0;
	}
	cout<<'1';
	if(abs(sa[2] - sb[2]) != 1)
	{
		cout<<"0";
		return 0;
	}
	cout<<'1';
	return 0;
}
