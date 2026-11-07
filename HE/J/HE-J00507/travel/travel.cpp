#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	char b[5],d[5];
	cin>>a;
	for(int i=1;i<=3;i++)cin>>b[i];
	cin>>c;
	for(int i=1;i<=3;i++)cin>>d[i];
	if(a==c)
	{
		cout<<1;
		if(b[1]==d[1]&&b[2]==d[2])
		{
			cout<<1;
			if((b[3]-d[3]<=2&&b[3]-d[3]>=0)||(d[3]-b[3]<=2&&d[3]-b[3]>=0))
			{
				cout<<1;
				if(b[3]-d[3]==1||d[3]-b[3]==1)cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	
	
	
	return 0;
}
