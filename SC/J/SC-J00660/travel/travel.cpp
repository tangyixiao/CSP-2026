#include<bits/stdc++.h>
using namespace std;
string a[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[1]>>a[2]>>a[3]>>a[4];
	cout<<(a[1]==a[3]);
	cout<<(a[1]==a[3]&&a[2][0]==a[4][0]&&a[2][1]==a[4][1]);
	if(a[1]==a[3]&&a[2][0]==a[4][0]&&a[2][1]==a[4][1]&&a[2][2]-'A'<3)
		cout<<(a[4][2]-'A'<3);
	else if(a[1]==a[3]&&a[2][0]==a[4][0]&&a[2][1]==a[4][1]&&a[2][2]-'A'>=3)
		cout<<(a[4][2]-'A'>=3);
	else
		cout<<0;
	if((a[1]==a[3])&&(a[2][0]==a[4][0]&&a[2][1]==a[4][1]))
	{
		if(a[2][2]=='D')
			cout<<(a[4][2]=='F');
		else if(a[2][2]=='F')
			cout<<(a[4][2]=='D');
		else if(a[2][2]=='C'&&a[4][2]=='D')
			cout<<0;
		else
			cout<<(abs(a[4][2]-a[2][2]==1?1:0));
	}
	else
		cout<<0;
	return 0;
}