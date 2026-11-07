#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	string a,b;
	cin>>n>>a>>m>>b;
	if(n==m)
	{
		cout<<1;
		if(a[0]==b[0]&&a[1]==b[1])
		{
			cout<<1;
			if(!(a[2]<='C'^b[2]<='C'))
			{
				cout<<1;
				if(a[2]-b[2]==1||b[2]-a[2]==1)
					cout<<1;
				else
					cout<<0;
			}
			else
				cout<<"00";
		}
		else
			cout<<"000";
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}