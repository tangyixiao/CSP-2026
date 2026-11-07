#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[n];
	char c[n];
	long long p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
		p+=a[i];
	}
	long long m=p/2;
	long long o=0;
	long long q=0;
	for(long long i=0;i<m;i+=a[o++])
	{
		if(c[o]!=c[n-1-o])
		{
			q+=a[o];
		}
	}
	cout<<q;
	return 0;
}
