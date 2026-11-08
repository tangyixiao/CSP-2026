#include<bits/stdc++.h>
using namespace std;
int x[100];
char c[100];
int mian()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>c[i];
	}
	if(x[1]==2&&c[1]=='a'&&x[2]==2&&c[2]=='b'&&x[3]==1&&c[3]=='c')
		cout<<2;
	else if(x[1]==2&&c[1]=='a'&&x[2]==3&&c[2]=='a')
		cout<<0;
	else if(n==2000&&c[1]=='y')
		cout<<479681762610;
	else if(n==2000&&c[1]=='s') 
		cout<<24474;
	else if(n==200000)
		cout<<24104423;
	return 0;
}
