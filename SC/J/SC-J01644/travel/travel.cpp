#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int ok=0;
	int cnt,cnt1;
	cnt=a.size();
	cnt1=b.size()-1;
	int num;
	for(int i=0;i<cnt;i++)
	{
		if(a[i]!=c[i])
		{
			cout<<0;
			ok=1;
			num=1;
			break;
		}
	}
	if(ok==0) cout<<1;
	ok=0;
	for(int i=0;i<cnt1;i++)
	{
		if(num==1)
		{
			cout<<0;
			ok=1;
			break;
		}
		if(b[i]!=d[i])
		{
			cout<<0;
			ok=1;
			num=1;
			break;
		}
	}
	if(ok==0) cout<<1;
	ok=0;
	if(b[2]<'D'&&d[2]<'D'&&num==0)
	{
		cout<<1;
	}
	else
	{
		if(b[2]>='D'&&d[2]>='D'&&num==0)
		{
			cout<<1;
		}
		else 
		{
			cout<<0;
			ok=1;
		}
	}
	if(abs(b[2]-d[2])==1&&ok==0&&num==0)
	{
		cout<<1;
	}
	else cout<<0;
	return 0;
}