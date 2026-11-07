#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
char a[100],b[100];
long long a1,b1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("trevel.out","w",stdout);
	
	cin>>a1;
	for(int i=0;i<3;i++) cin>>a[i];
	cin>>b1;
	for(int i=0;i<3;i++) cin>>b[i];
	
	if(a1==b1) cout<<"1";
	else cout<<"0";
	
	if(a1==b1 && a[0]==b[0] && a[1]==b[1])
	{
		if(a[2]<b[2]) swap(a[2],b[2]);
		cout<<"1";
		if(a[2]=='F' && b[2]=='D') cout<<"11";
		if(a[2]-b[2]==1 && a[2]!='D' && b[2]!='D') cout<<"11";
		else if(a[2]-b[2]==1) cout<<"00";
		else if(a[2]=='A' || a[2]=='B' || a[2]=='C')
			if(b[2]=='A' || b[2]=='B') cout<<"10";
			
	}
	else cout<<"000";
	return 0;
}