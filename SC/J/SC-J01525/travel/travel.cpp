#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1[0]==b1[0]&&a1[1]==b1[1])
	{
		cout<<"1";
		if(a2[0]==b2[0]&&a2[1]==b2[1]){
			cout<<"1";
			if('A'<=a2[2]&&a2[2]<='C'&&'A'<=b2[2]&&b2[2]<='C'){
				cout<<"1";
				if(a2[2]+1==b2[2]||a2[2]-1==b2[2])
				{
					cout<<"1";
				}
				else
					cout<<"0";
			}
			else if('D'<=a2[2]&&a2[2]<='F'&&'D'<=b2[2]&&b2[2]<='F')
			{
				cout<<"1";
				if(a2[2]+1==b2[2]||a2[2]-1==b2[2])
				{
					cout<<"1";
				}
				else
					cout<<"0";
			}
			else
				cout<<"00";
		}
		else
			cout<<"000";
	}
	else cout<<"0";
	return 0;
}