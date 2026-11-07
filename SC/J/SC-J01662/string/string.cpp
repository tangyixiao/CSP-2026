#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long   a[1000000005]={};
	string s[1000000005]={};
	long long n;
	cin>>n;
	int m=0;
	for(int i=0;i<n;i++)
	{
		int ai;
		string ci;
		cin>>ai>>ci;
		for(int i=m;i<ai;i++)
		{
			s[i]=ci;
		}
		m+=ai;
	}
	long long ans=0;
	for(int i=0;i<m/2;i++)
	{
		if(s[i] != s[m-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}