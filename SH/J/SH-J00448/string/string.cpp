#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=1e9+5;
char a[MAXN];
int cnt=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	int q=1;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		int t;
		char c;
		cin>>t>>c;
		sum+=t;
		if(sum<=1e9+5)
		{
			a[q]=c;
			q+=t;
		}
	}
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	if(sum<=1e9+5)
	{
		char now;
		for(int i=1;i<=sum;i++)
		{
			if(a[i]!=NULL) now=a[i];
			else a[i]=now;
		}
		int st=1;
		int en=sum;
		while((st!=en)&&(st+1!=en))
		{
			if(a[st]!=a[en]) cnt++;
			st++;
			en--;
		}
		cout<<cnt;
	}
	else
	{
		cout<<sum/2;
	}
	return 0;
}

