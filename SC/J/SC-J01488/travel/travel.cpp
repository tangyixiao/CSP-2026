#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cr,cx,sr,sx;
	cin>>cr>>sr>>cx>>sx;
	cout<<(cr==cx);
	if(sr[0]==sx[0])
		cout<<(sr[1]==sx[1]);
	else cout<<0;
	if((sr[2]<='C'&&sx[2]<='C')||(sr[2]>='D'&&sx[2]<='D'))
	{
		cout<<1;
		if(abs(int(sr[2])-int(sx[2]))==1) cout<<1;
		else cout<<0;
	}
	else cout<<0<<0;
	return 0;
 } 