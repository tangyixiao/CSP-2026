#include<bits/stdc++.h>
using namespace std;
string str,pre;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m=0,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		m+=a;
		while(a--) str+=b;
	}
	if(m%2==0)
	{
		for(int i=1;i<=m/2;i++) pre[i]=str[i];
		for(int i=1,j=m;i<=m/2,j>=m/2+1;i++,j--) if(pre[i]!=str[j]) cnt++;
	}
	else if(m%2==1)
	{
		for(int i=1;i<=m/2;i++) pre[i]=str[i];
		for(int i=1,j=m;i<=m/2,j>=m/2+2;i++,j--) if(pre[i]!=str[j]) cnt++;
	}	
	cout<<cnt;
	return 0;
}
