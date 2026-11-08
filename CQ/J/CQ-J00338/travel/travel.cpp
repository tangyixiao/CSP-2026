#include<bits/stdc++.h>
using namespace std;
#define int long long
char a[5],ta[5],b[5],tb[5];
int vis[5];

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a>>ta>>b>>tb;
//	for(int i=0;i<3;i++) cout<<ta[i];
//	cout<<tb[2];
	if(a[0]==b[0] && a[1]==b[1])
	{
		vis[0]=1;
		if(ta[0]==tb[0] && ta[1]==tb[1])
		{
			vis[1]=1;
			int la=ta[2]-'A',lb=tb[2]-'A';
//			cout<<la<<" "<<lb<<endl;
			if(la<3 && lb<3)
			{
				vis[2]=1;
				if(abs(la-lb)==1) vis[3]=1;
			}
			else if(la>=3 && lb>=3)
			{
				vis[2]=vis[3]=1;
			}
		 } 
	}
	for(int i=0;i<4;i++) cout<<vis[i];
	return 0;
}
