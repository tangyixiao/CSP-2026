#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200000];
	char c[200000];
	string ans="";
	cin>>n;
	for(long long i=0;i<n;i++)
		{
		cin>>a[i]>>c[i];
		for(int j=0;j<a[i];j++)
			ans+=c[i];		
		}
	bool b=1;
	long long m=0,p=0;
	for(long long i=n-1;i>=0;i--)
		{
		if(ans[i]!=ans[m])
			{
			b=0;
			p++;
			}		
		m++;
		}
	if(b)
		cout<<0;
	else
		cout<<p;
	return 0;
}

