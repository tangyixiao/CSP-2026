#include<bits/stdc++.h>
using namespace std;
int main ()
{
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	int n,m;
	int c[6],c2[6];
	char a[19],b[19];
	for(int i=1;i<=2;i++)
	{
	cin>>n;
	cin>>c[i]>>a[i];
	cin>>m;
	cin>>c2[i]>>b[i];
		if(n!=m)
		{
			cout<<"0000";
			return 0;
		}else 
		cout<<1;
		if(c[i]==c2[i])
		cout<<1;
		else{
		cout<<"000";
		return 0;
		}
		if(c[i]==c2[i]&&c[i]>=5&&c2[i]>=5)
		cout<<1;
		else if(a[i]!='C'&&b[i]!='D'&&c[i]==c2[i]&&c[i]<=3&&c2[i]<=3)
		cout<<1;
		else
		cout<<0;
	if(a[i]=='A'&&b[i]=='B'||a[i]=='c'&&b[i]=='B'||a[i]=='D'&&b[i]=='F'||a[i]=='B'&&b[i]=='A'||a[i]=='B'&&b[i]=='C'||a[i]=='C'&&b[i]=='B'||a[i]=='F'&&b[i]=='D')
		cout<<1;
			else
		cout<<0;
		 return 0;
}
}
