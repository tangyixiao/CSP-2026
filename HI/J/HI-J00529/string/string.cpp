#include<bits/stdc++.h>
using namespace std;
int n,ans,a,s[10000005],m;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=m;j<=a+m;j++)
		{
			s[j]=b-96;
		}
		m+=a;
	}
	if(m%2==1)
	{
		for(int i=1;i<=m/2;i++)
		{
			if(s[i]!=s[m/2+i])	
			{
				ans++;
			}
		}
	}
	cout<<ans; 
	return 0;
} 
