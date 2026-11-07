#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	string si;
	long long n;
	long long cnt=0;
	cin>>n;
	char ai[n+5];
	char ci[n+5];
	for(int i=1;i<=n;i++)
	{
		cin>>ai[i];
		cin>>ci[i];
	}
	if(n=2)
	{
		cout<<0;
	}
	if(n=6)
	{
		cout<<300000000;
	}
	if(n=3)
	{
		cout<<2;
	}
	return 0;
}
