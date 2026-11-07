#include<bits/stdc++.h>
using namespace std;
int n,a;
long long L=0,ans=0,a1=1;
char c;
string b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		L+=a;	
		cin>>c;
		for(int q=a1;q<a1+a;q++)
		{
			b[q]=c;
		}
		a1+=a;
	}
	for(int i=1;i<=L/2;i++)
	{
		if(b[i]!=b[L+1-i])
		++ans;
	}
	printf("%ld",ans);
	return 0;
}
