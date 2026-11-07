#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k=1,ans=0,mid;
	char ch,str[100005];
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		cin>>ch;
		for(int j=k;j<=k+m;j++)
		{
			str[j]=ch;
		}
		k+=m;
	}
	mid=(k+1)/2;
	for(int i=1;i<=mid;i++)
	{
		if(str[1]!=str[k-i-1])
		{
			++ans;
		}
	}
	cout<<ans;
	return 0;
} 