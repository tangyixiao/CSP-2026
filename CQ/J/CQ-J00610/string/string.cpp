#include<bits/stdc++.h>
using namespace std;
int n,m[10005],cnt=0,ans=0;
char a[10005],b[10005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>m[i]>>a[i];
	cnt=m[1];
	
	for(int i=1;i<=1;i++)
	for(int j=1;j<=m[i];j++)
	b[j]=a[i];
	
	for(int i=2;i<=n;i++)
	{
		cnt+=m[i];
	    for(int j=cnt-m[i]+1;j<=cnt+1;j++)
	    b[j]=a[i];
    }
	
    for(int i=1;i<=cnt/2;i++)
    {
    	if(b[i]!=b[cnt-i+1])
    	ans++;
    }
    cout<<ans;
}

